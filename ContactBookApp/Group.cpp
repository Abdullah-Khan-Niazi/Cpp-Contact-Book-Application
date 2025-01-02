#include"Group.h"
#include"ContactsBook.h"
#include"Contact.h"
#include<fstream>
int Group::getGroupCount()
{
	return group_count;
}
ContactsBook* Group::getContactBook()
{
	return obj;
}
string Group::getName(int n)
{
	return group_name[n];
}
Group::Group(){
	/*group_name = nullptr;
	obj = nullptr;
	size_of_group=1;
	group_count=0;*/
	size_of_group = 1;
	group_name = new string[size_of_group];
	obj = new ContactsBook(1);
	group_count = 0;
}
Group::Group(int size) {
	size_of_group = size;
	group_name = new string[size_of_group];
	obj = new ContactsBook[size_of_group];
	group_count = 0;
}
void Group::set_group_name(string group_name) {
	this->group_name[group_count] = group_name;
}
void Group::add_group_member(Contact& temp) {
	obj[group_count].add_contact(temp);       
}
void Group::resize_group() {
	string* temp = new string[2 * size_of_group];
	ContactsBook* tempObj = new ContactsBook[2 * size_of_group];
	for (int i = 0; i < size_of_group; i++) {
		temp[i] = group_name[i];
		tempObj[i] = obj[i];
	}
	delete[] group_name;
	delete[] obj;
	group_name = temp;
	obj = tempObj;
	size_of_group = 2 * size_of_group;
}
void Group::create_group(int *arr,string str) {
	Contact* temp=new Contact;
	temp = obj->getContact();
	for (int i = 0; i < obj->total_contacts(); i++) {
		if (i == arr[i]) {
			obj[group_count].add_contact(temp[i]);
			group_name[group_count] = str;
			
		}
	}
	group_count = group_count + 1;
	delete temp;
}
void Group::delete_group_member(int index) {
	obj->delete_contact(index);
}
void Group::delete_group(int index) {
	ContactsBook* temp = new ContactsBook[group_count];
	int count = 0;
	for (int i = 0; i < group_count; i++) {
		if (i != index) {
			temp[count] = obj[i];
			count = count + 1;
		}
	}
	size_of_group = group_count;
	group_count = group_count - 1;
	delete[] obj;
	obj = temp;
}
void Group::save_group_to_file(string file, string file1) {
	ofstream write;
	write.open("group.txt", ios::app);
	write << group_count << endl;
	for (int i = 0; i < group_count; i++) {
		write << group_name[i] << endl;
		write << obj[i].total_contacts() << endl;
		obj->save_to_file(file1);
	}
	write.close();
}

void Group::load_group_from_file(string file, string file1) {
	ifstream read;
	read.open(file);
	int count = 0;
	read >> count;
	//cout << "Count : " << count << endl;
	obj = new ContactsBook[count];
	group_name = new string[count];
	while (group_count + count >= size_of_group) {
		resize_group();
	}
	group_count = group_count + count;
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		arr[i] = 0;
	}
	string name;
	int sum = 0;
	for (int i = 0; i < count; i++) {
		read >> name;
		group_name[i] = name;
		//cout << "Name : " << group_name[i] << endl;
		read >> arr[i];
		sum = sum + arr[i];
	}
	//cout << "Sum : " << sum << endl;
	ContactsBook* temp = new ContactsBook(sum);
	temp->load_from_file(file1);
	//cout << "Temp size : " << temp->getSize() << endl;
	//cout << "Temp Contact Count : " << temp->total_contacts() << endl;
	obj = new ContactsBook[count];
	for (int i = 0; i < count; i++) {
		obj[i] = ContactsBook(arr[i]);
		//cout << "OBJ[ " << i << " ] size : " << obj[i].getSize() << endl;
	}
	int index = 0, flag = 0;
	//temp->print_contacts();
	Contact* tempObj = temp->getContact();
	for (int i = 0; i < temp->total_contacts(); i++) {
		obj[index].add_contact(tempObj[i]);
		obj[index].print_contacts();
		//cout << "OBJ Contact Count : " << obj[index].total_contacts() << endl;
		flag = flag + 1;
		//cout << "Flag : " << flag << endl;
		if (flag - 1 == arr[index]) {
			//cout << "Flag in If : " << flag << endl;
			index = index + 1;
			//cout << "Index : " << index << endl;
			flag = 0;
		}

	}

}





