#pragma once

//#ifndef BASIC_LIB
//#define BASIC_LIB
	//#include <iostream>
#include <string>
//#endif // !BASIC_LIB

#include "Address.h"
#include<string>
using namespace std;
class Contact {
private:
	string first_name;
	string last_name;
	string mobile_number;
	string email_address;
	Address* address;

public:

	void setFirstName(string fname);
	void setLastName(string lname);
	void setMobileNumber(string num);
	void setEmail(string mail);
	void setAddress(string house, string street, string city, string country);

	string getFirstName();
	string getLastName();
	string getNumber();
	string getEmail();
	Address* getAddress();
	Contact();
	Contact(string first_name, string last_name, string mobile_number, string email_address, Address address);

	bool equals(Contact contact);
	Contact* copy_contact();


};
