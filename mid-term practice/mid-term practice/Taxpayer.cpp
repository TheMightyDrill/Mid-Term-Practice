#include "Taxpayer.h"
#include "Person.h"

/*
Taxpayer::Taxpayer() : Person() {
	this->phoneNumber = -1;
	this->cashOwed = -1;
	this->SSN = -1;
}
*/

Taxpayer::Taxpayer(int p, double c, int s) : Person() {
	this->phoneNumber = p;
	this->cashOwed = c;
	this->SSN = s;
	//bob
}

Taxpayer::Taxpayer(Person p, int n, double c, int s) : Person(p) {
	this->phoneNumber = n;
	this->cashOwed = c;
	this->SSN = s;
}

void Taxpayer::setNumber(int p) {
	this->phoneNumber = p;
}

void Taxpayer::setCashOwed(int c) {
	this->cashOwed = c;
}

void Taxpayer::setSSN(int s) {
	this->SSN = s;
}

int Taxpayer::getNumber() {
	return this->phoneNumber;
}

double Taxpayer::getCashOwed() {
	return this->cashOwed;
}

int Taxpayer::getSSN() {
	return this->SSN;
}

void Taxpayer::displayPersonalInformation() {
	system("CLS");
	cout << "Name: " << getName() << endl;
	cout << "SSN: " << getSSN() << endl;
	cout << "Address: " << getAddress() << endl;
	cout << "Phone Number: " << getNumber() << endl;
	cout << "--------------------" << endl;
	system("Pause");
	system("CLS");
}

void Taxpayer::displayCashOwed() {
	system("CLS");
	cout << "Name: " << getName() << endl;
	cout << "Cash owed: " << getCashOwed() << endl;
	system("Pause");
}

void Taxpayer::print() {
	displayPersonalInformation();
	displayCashOwed();
}
