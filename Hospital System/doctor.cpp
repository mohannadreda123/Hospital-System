#pragma once
#include<iostream>
#include<string>
#include"person.cpp"
using namespace std;
class Doctor : public Person
{
private:
	string specialization;
public:
	Doctor(string name, int id, string specialize) : Person(name, id)
	{
		specialization = specialize;
	}
	void display() override
	{
		cout << "==========Doctor Info==========\n";
		Person::display();
		cout << "Specialization : " << specialization << "\n";
	}
};
