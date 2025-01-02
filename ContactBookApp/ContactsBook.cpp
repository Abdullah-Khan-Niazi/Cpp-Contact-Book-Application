#include "ContactsBook.h"
#include<fstream>
ContactsBook::ContactsBook() {
	contacts_list = nullptr;
	size_of_contacts = 1;
	contacts_count = 0;

}
ContactsBook::ContactsBook(int size_of_list) {
	contacts_list = new Contact[size_of_list];
	size_of_contacts = size_of_list;
	contacts_count = 0;
}
int ContactsBook::getSize()
{
	return size_of_contacts;
}
Contact ContactsBook::getContact(int n)
{
	return contacts_list[n];
}
void ContactsBook::add_contact(const Contact& contact)
{
	if (full() == true || size_of_contacts == 0) {
		resize_list();
	}
	contacts_list[contacts_count] = contact;
	contacts_count = contacts_count + 1;
	/*
		- Check if the list is full, if it is full call the resize function
		- If list is not full add the contact to the end of the array
		- (end means the place where last contact was inserted)
		- At start it will be 0th index as no contact has been inserted before so
		- count is zero (contacts_count member)
		- Increment the count
		- As inserted successfully, return 1
	*/
}

int ContactsBook::total_contacts()
{
	/*
	*	Return the total contacts currently stored
	*/
	/*
	*	Remove this return -1; before writing your code
	*/
	return contacts_count;
}

void ContactsBook::delete_contact(int index) {
	Contact* temp = new Contact[contacts_count];
	int count = 0;
	for (int i = 0; i < contacts_count; i++) {
		if (i != index) {
			temp[count] = contacts_list[i];
			count = count + 1;
		}
	}
	delete[] contacts_list;
	contacts_list = temp;
	size_of_contacts = contacts_count;
	contacts_count = contacts_count - 1;
}

bool ContactsBook::full()
{
	/*
	* Return true if list is full, false otherwise
	*/
	if (contacts_count == size_of_contacts) {
		return true;
	}
	else {
		return false;
	}
	/*
	*	Remove this return false; before writing your code
	*/
}

void ContactsBook::resize_list() {
	/*
	*	Here you will resize the contact list, see example code given in lab manual to see how to resize arrays
	*	You will allocate a temporary new array of double the current size and copy the contacts from
	*       previous array to this array one by one, get the copy of each contact using copy_contact
	*       function of Contact class
	*	Delete the previous array
	*	Assign the new temporary array to the contacts_list pointer
	*	Updated the this->size_of_contacts with new size
	*/
	int newSize = 0;
	newSize = 2 * (size_of_contacts + 1);
	Contact* temp = new Contact[newSize];
	for (int i = 0; i < contacts_count; i++) {
		temp[i] = contacts_list[i];
	}
	delete[] contacts_list;
	contacts_list = temp;
	size_of_contacts = newSize;
}

Contact* ContactsBook::search_contact(string first_name, string last_name) {
	/*
	*	In all search functions perform the searching according the given parameter and return a copy of the contact using copy func
	*	Remove this return nullptr; before writing your code
	*/
	Contact* ptr = nullptr;
	for (int i = 0; i < size_of_contacts; i++) {
		if (contacts_list[i].getFirstName() == first_name && contacts_list[i].getLastName() == last_name) {
			return contacts_list[i].copy_contact();
		}
	}
	return nullptr;
}

Contact* ContactsBook::search_contact(string phone) {
	/*
	*	Remove this return nullptr; before writing your code
	*/
	for (int i = 0; i < size_of_contacts; i++) {
		if (contacts_list[i].getNumber() == phone) {
			return contacts_list[i].copy_contact();
		}
	}
	return nullptr;
}

Contact* ContactsBook::search_contact(const Address& address) {
	/*
	*	Remove this return nullptr; before writing your code
	*/

	for (int i = 0; i < size_of_contacts; i++) {
		if (contacts_list[i].getAddress()->equals(address) == true) {
			return contacts_list[i].copy_contact();
		}
	}
	return nullptr;
}
Contact* ContactsBook::getContact()
{
	return contacts_list;
}
Contact* ContactsBook::Copy() {
	Contact* temp = new Contact[contacts_count];
	for (int i = 0; i < contacts_count; i++) {
		temp[i] = contacts_list[i];
	}
	return temp;
}

void ContactsBook::print_contacts_sorted(string choice) {
	sort_contacts_list(contacts_list, choice);
	/*
	*	Create a copy of this->contacts_list array here (do it by creating a new function that returns copy)
	*	Call the sort function sort_contacts_list to sort the newly created copy
	*	This copy is created to avoid changing the original insertion order of contact list
	*	Then print the contacts in following format:
	*	[First Name] [Last Name] [Mobile] [Email]
	*	Call the address print function to print address on next line
	*/
	for (int i = 0; i < contacts_count; i++) {
		cout << "Name : " << contacts_list[i].getFirstName() << " " << contacts_list[i].getLastName() << " ";
		cout << "Mobile : " << contacts_list[i].getNumber() << " ";
		cout << "Email : " << contacts_list[i].getEmail() << " ";
		cout << endl;
		//contacts_list[i].getAddress()->print_address();
	}
}
void ContactsBook::print_contacts() {
	for (int i = 0; i < contacts_count; i++) {
		cout << "Name : " << contacts_list[i].getFirstName() << " " << contacts_list[i].getLastName() << " ";
		cout << "Mobile : " << contacts_list[i].getNumber() << " ";
		cout << "Email : " << contacts_list[i].getEmail() << " ";
		cout << endl;
		//contacts_list[i].getAddress()->print_address();
	}
}

void ContactsBook::sort_contacts_list(Contact* contacts_list, string choice) {

	/*
		You should not duplicate the code to sort based on choices
		Follow the strategy provided in manual/tutorial to avoid duplicating the code (Section B & E only)
		Sort by the fist letter of first name or last name as given in choice
	*/
	Contact* obj = Copy();
	string temp = " ";
	string temp1 = " ";

	for (int i = 0; i < contacts_count - 1; i++) {
		for (int j = 0; j < contacts_count - i - 1; j++) {
			if (choice == "F" || choice == "f") {
				temp = obj[j].getFirstName();
				temp1 = obj[j + 1].getFirstName();
			}
			else if (choice == "L" || choice == "l") {
				temp = obj[j].getLastName();
				temp1 = obj[j + 1].getLastName();
			}
			if (temp[0] > temp1[0]) {
				// Swap the contacts_list[j] and contacts_list[j + 1]
				Contact tempObj = obj[j];
				obj[j] = obj[j + 1];
				obj[j + 1] = tempObj;
			}
		}
	}
	for (int i = 0; i < contacts_count; i++) {
		contacts_list[i] = obj[i];
	}
	delete[] obj;
}


void ContactsBook::merge_duplicates() {
	//	// Implement this function that finds and merges all the duplicates
	//	// Duplicate means exact equal
	//	// If there are three copies of a Contact, then only one should remain
	//	// For example: If total contact are 10, and 2 contacts are same, after removing duplicates
	//	// 9 contacts will be left; and the this->contacts_count of list will 9
	//	// At the end display contacts merged, and count of merged contacts

	int* arr = new int[contacts_count];
	for (int i = 0; i < contacts_count; ++i) {
		arr[i] = 0;
	}
	int duplicateCount = 0;
	for (int i = 0; i < contacts_count; i++) {
		for (int j = i + 1; j < contacts_count; j++) {
			if (contacts_list[i].equals(contacts_list[j])) {
				arr[j] = 1;
				duplicateCount = duplicateCount + 1;
				//contacts_count = contacts_count - 1;
				break;
			}
		}
	}
	ContactsBook temp(contacts_count - duplicateCount);
	int index = 0;
	for (int i = 0; i < contacts_count; i++) {
		if (arr[i] != 1) {
			temp.contacts_list[index] = contacts_list[i];
			index = index + 1;
		}
	}
	delete[] contacts_list;
	delete[] arr;
	contacts_list = temp.contacts_list;
	contacts_count = contacts_count - duplicateCount;
	size_of_contacts = contacts_count;
	//cout << "Merged Contacts:" << endl;
	//for (int i = 0; i < contacts_count; i++) {
	//	cout << "Name: " << contacts_list[i].getFirstName() << " " << contacts_list[i].getLastName() << endl;
	//	cout << "Mobile: " << contacts_list[i].getNumber() << endl;
	//	cout << "Email: " << contacts_list[i].getEmail() << endl;
	//	contacts_list[i].getAddress()->print_address();
	//	cout << endl;
	//}
	cout << "Count of merged contacts: " << contacts_count << endl;
}

void ContactsBook::load_from_file(string file_name) {

	/*
	*	Read contacts back from file in the same format
	*	Read the contacts_count, and run a loop for this contacts_count and read the
	*	contacts in the same format as you stored
	*	Add them to contact book (this.add_contact function can be used)
	*	Finally, close the file
	*/
	ifstream read;
	int count = 0;
	string house;
	string street;
	string city;
	string country;
	string first_name;
	string last_name;
	string mobile_number;
	string email_address;
	read.open(file_name);
	read >> count;
	//cout << "Count readed" << endl;
	//size_of_contacts = contacts_count + count;
	while (contacts_count + count >= size_of_contacts) {
		resize_list();
	}
	//cout << "List resized" << endl;

	/*for (int i = contacts_count; i < (contacts_count + count); i++){*/
	for (int i = 0; i < count; i++) {
		// while(!read.eof()){
		read >> first_name;
		//cout << "first name readed" << endl;
		read >> last_name;
		//cout << "last name readed" << endl;
		read >> mobile_number;
		//cout << "number readed" << endl;
		read >> email_address;
		//cout << "email readed" << endl;
		read >> house;
		//cout << "house readed" << endl;
		read >> street;
		//cout << "street readed" << endl;
		read >> city;
		//cout << "City readed" << endl;
		read >> country;
		//cout << "Country readed" << endl;
		Address temp_obj(house, street, city, country);
		Contact tempContact(first_name, last_name, mobile_number, email_address, temp_obj);
		add_contact(tempContact);
	}
	read.close();
}

void ContactsBook::save_to_file(string file_name) {
	/*
	*	In this function you will store all the contacts to a file
	*	On first line store contacts_count
	*	On next lines store contacts in the following format:
	*       2 lines for each contact
	*       On oneline write contact attributes(except address) in comma separated format. On second line
	*	store address atributes in the same format
	*	first_name,last_name,mobile_number,email_address
	*	house,street,city,country
	*	Close the file
	*/
	ofstream write;
	write.open(file_name, ios::trunc);
	write << contacts_count << endl;
	for (int i = 0; i < contacts_count; i++) {
		write << contacts_list[i].getFirstName() << " " << contacts_list[i].getLastName() << " " << contacts_list[i].getNumber() << " " << contacts_list[i].getEmail() << endl;
		write << contacts_list[i].getAddress()->getHouse() << " " << contacts_list[i].getAddress()->getStreet() << " " << contacts_list[i].getAddress()->getCity() << " " << contacts_list[i].getAddress()->getCountry() << endl;
	}
	write.close();
}
int* ContactsBook::advanceSearch(string str) {
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
	bool found = true;
	string str1;
	int count = 0;
	int flag = 0;
	int* arr = new int[contacts_count];
	for (int i = 0; i < contacts_count; i++) {
		arr[i] = -1;
	}
	int index = 0;
	for (int i = 0; i < contacts_count; i++) {
		str1 = contacts_list[i].getFirstName()+ contacts_list[i].getLastName()+ contacts_list[i].getNumber();
		flag = str1.length();
		for (int a = 0; a < flag; a++) {
			if (islower(str1[a])) {
				str1[a] = toupper(str1[a]);
			}
		}
		count = 0;
		int previous = 0;
		bool tempflag = false;
		for (int k = 0; k < len; k++) {
			for (int j = previous; j < flag; j++) {
				if (str[k] == str1[j] && tempflag == false) {
					tempflag = true;
					previous = j;
					count++;
					break;
				}
				else if (str[k] == str1[j] && previous != j) {
					previous = j;
					count++;
					break;
				}
			}
		}
		bool same = false;
		for (int k = 0; k < index; k++) {
			if (contacts_list[i].equals(contacts_list[arr[k]])) {
				same = true;
			}
		}
		if (count >= len && same == false) {
			count = 0;
			arr[index] = i;
			index++;
	    }
	}
	return arr;
}






