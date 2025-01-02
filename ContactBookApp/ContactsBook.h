#pragma once
#include "Address.h"
#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;
//#ifndef BASIC_LIB
//#define BASIC_LIB

/*#endif */// !BASIC_LIB

class ContactsBook {
private:
	Contact* contacts_list; // array of contacts
	int size_of_contacts;   // storage limit
	int contacts_count;     // total contacts currently stored, next contact will be 
	// stored at this count plus 1 index

public:

	Contact getContact(int n);

	void add_contact(const Contact& contact);
	int total_contacts();
	void delete_contact(int index);
	Contact* search_contact(string first_name, string last_name);
	Contact* search_contact(string phone);
	Contact* search_contact(const Address& address);
	Contact* getContact();
	ContactsBook();
	ContactsBook(int size_of_list);
	void print_contacts_sorted(string choice); // Only two choices first_name or last_name
	void merge_duplicates(); // Implement this function that finds and merges all the duplicates
	// Duplicate means exact equal, this means if
	Contact* Copy();
	void print_contacts();
	/*
	*  This function loads contacts from the given file (see details in ContactsBook.cpp)
	*/
	void load_from_file(string file_name);
	void save_to_file(string file_name);
	int getSize();
	int* advanceSearch(string str);
private:
	bool full();
	void resize_list();
	void sort_contacts_list(Contact* contacts_list, string choice);
};
