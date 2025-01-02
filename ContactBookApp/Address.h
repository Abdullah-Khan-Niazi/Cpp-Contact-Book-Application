#pragma once
//#include <iostream>
#include <string>
using namespace std;
class Address {
private:
	string house;
	string street;
	string city;
	string country;

public:
	Address();
	Address(string house, string street, string city, string country);

	void setHouse(string house);
	void setStreet(string street);
	void setCity(string city);
	void setCountry(string country);

	string getHouse();
	string getStreet();
	string getCity();
	string getCountry();

	bool equals(const Address& address);
	//void print_address();
	Address copy_address();
};
