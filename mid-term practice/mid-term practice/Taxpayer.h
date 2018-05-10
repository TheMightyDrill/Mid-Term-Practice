#pragma once
#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

class Taxpayer : public Person {

	int phoneNumber;
	double cashOwed;
	int SSN;

public:

	//constructors
	//Taxpayer() : Person();

	Taxpayer(int p, double c, int s) : Person() {
		this->phoneNumber = p;
		this->cashOwed = c;
		this->SSN = s;
	}

	Taxpayer(Person p, int n, double c, int s) : Person(p) {
		this->phoneNumber = n;
		this->cashOwed = c;
		this->SSN = s;
	}

	//sets user info
	void setNumber(int p);

	void setCashOwed(int c);

	void setSSN(int s);

	//gets user info
	int getNumber();

	double getCashOwed();

	int getSSN();


	//prints taxpayer's information
	void displayPersonalInformation();

	void displayCashOwed();

	void print();

};
