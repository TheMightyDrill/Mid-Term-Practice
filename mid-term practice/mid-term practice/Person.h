#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {

	char name[30];
	int SSN;
	int address;

public:
	
	//constructors
	Person();

	Person(string name, int s, int a);

	Person(Person *p);

	//sets name
	void setName(string s);

	//gets info
	string getName();

	int getSSN();

	int getAddress();

};