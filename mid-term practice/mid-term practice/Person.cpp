#include "Person.h"

Person::Person() {
	this->name[0] = 'x';
	this->SSN = -1;
	this->address = -1;
}

Person::Person(string name, int s, int a) {
	strcpy_s(this->name, name.c_str());
	this->SSN = s;
	this->address = a;
}

Person::Person(Person *p) {
	this->setName(p->getName());
	this->address = p->getAddress();
	this->SSN = p->getSSN();
}

void Person::setName(string s) {
	strcpy_s(this->name, s.c_str());
}

string Person::getName() {
	string t_name = this->name;

	return t_name;
}

int Person::getSSN() {
	return this->SSN;
}

int Person::getAddress() {
	return this->address;
}
