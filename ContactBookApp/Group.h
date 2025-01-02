#pragma once
#include"ContactsBook.h"

class Group {
private:
	string *group_name;
	ContactsBook *obj;
	int size_of_group;
	int group_count;
public:
	//void selected_contact();
	ContactsBook* getContactBook();
	Group();
	Group(int size);
	int getGroupCount();
	string getName(int n);
	//void delete_selected_contact();
	void create_group(int *arr,string str);
	void add_group_member(Contact &obj);
	void set_group_name(string group_name);
	void resize_group();
	void save_group_to_file(string file, string file1);
	void load_group_from_file(string file, string file1);
	void delete_group_member(int index);
	void delete_group(int index);
};