#include "Contact.h"
#include<string>
/*
*	Implement a constructor that initializes all the Contact parts, including address. Call the setter to set values
*	as they have the logic to check correct input
*	Declaration is given in Contact.h
*/
Contact::Contact() :first_name{ "null" }, last_name{ "null" }, mobile_number{ "null" }, email_address{ "null" }, address{ nullptr } {}
Contact::Contact(string first_name, string last_name, string mobile_number, string email_address, Address address) {
	this->first_name = first_name;
	this->last_name = last_name;
	this->mobile_number = mobile_number;
	this->email_address = email_address;
	this->address = new Address(address);
}

/*
*	Implement getter/setters for all the member variables of Contact. Also declare them in the Contact.h header file
*	In each setter, do not set value if string is empty ("" 0 size).
*   Check in phone number setter, Phone number must be 11 digits
*/
//-----------setter-----------------------------
void Contact::setFirstName(string fname) {
	this->first_name = fname;
}
void Contact::setLastName(string lname) {
	this->last_name = lname;
}
void Contact::setMobileNumber(string num) {
	this->mobile_number = num;
	if (size(num) < 11) {
		//	cout << "Mobile number must be 11 digits" << endl;
	}
}
void Contact::setEmail(string mail) {
	this->email_address = mail;
}
void Contact::setAddress(string house, string street, string city, string country) {
	address->setHouse(house);
	address->setStreet(street);
	address->setCity(city);
	address->setCountry(country);
}

//-----------------------getter---------------------------

string Contact::getFirstName() {
	return first_name;
}
string Contact::getLastName() {
	return last_name;
}
string Contact::getNumber() {
	return mobile_number;
}
string Contact::getEmail() {
	return email_address;
}
Address* Contact::getAddress() {
	return address;
}
/*
*	Implement the equals function(as declared in header file) that takes a
*   Contact object and checks if it is equal to current object refered by (this pointer).
*   Compare all the attributes.
*   For comparing address of contact you can call the equals function of the Address object;
*   For example: this.address.equals
*/
bool Contact::equals(Contact contact) {
	if ((this->first_name == contact.first_name) && (this->last_name == contact.last_name) &&
		(this->mobile_number == contact.mobile_number) &&
		(this->email_address == contact.email_address) &&
		(this->address->equals(*address))) {
		return true;
	}
	else {
		return false;
	}
}


Contact* Contact::copy_contact()
{
	/*
		Return a new object(deep copy of "this"[due to Address pointer, which should also be copied])
	*/
	Contact* temp = new Contact;
	temp->first_name = this->first_name;
	temp->last_name = this->last_name;
	temp->mobile_number = this->mobile_number;
	temp->email_address = this->email_address;
	temp->address = this->address;
	return temp;

}