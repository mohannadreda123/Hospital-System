#pragma once
#include<iostream>
#include<string>
#include"person.cpp"
using namespace std;
class Patient : public Person
{
private:
	string disease;
public:
	Patient(string name, int id, string disease) : Person(name, id)
	{
		this->disease = disease;
	}
	void display() override
	{
		cout << "==========Patient Info==========\n";
		Person::display();
		cout << "Disease : " << disease << "\n";
	}
};
