#include "Address.h"
#include<string>
/*
*	Implement a constructor that initializes all the address parts
*
*/
Address::Address() {
	house = " ";
	street = " ";
	city = " ";
	country = " ";
}
Address::Address(string house, string street, string city, string country) {
	this->house = house;
	this->street = street;
	this->city = city;
	this->country = country;
}



/*
*	Implement getter/setters for all the member variables of Address. Also declare them in the Address.h header file
*
*/
void Address::setHouse(string house) {
	this->house = house;
}
void Address::setStreet(string street) {
	this->street = street;
}
void Address::setCity(string city) {
	this->city = city;
}
void Address::setCountry(string country) {
	this->country = country;
}

string  Address::getHouse() {
	return house;
}
string  Address::getStreet() {
	return street;
}
string  Address::getCity() {
	return city;
}
string  Address::getCountry() {
	return country;
}


/*
*	Implement the equals function that takes an Address object and checks if it is equal to
*	current object refered by (this pointer)
*	Two addresses are equal if all the attributes of addresses are equal
*/
bool Address::equals(const Address& address)
{
	/*
	* Todo
	*/
	if (house == address.house && street == address.street && city == address.city && country == address.country) {
		return true;
	}
	else {
		return false;
	}
}

//void Address::print_address()
//{
//	/*
//	*	Print address on one line as
//	*	House, Street, City, Country
//	*/
//	cout << "House : " << house << endl;
//	cout << "Street : " << street << endl;
//	cout << "City : " << city << endl;
//	cout << "Country : " << country << endl;
//}

Address Address::copy_address()
{
	/*
		return a copy of this
	*/
	return *this;
}
