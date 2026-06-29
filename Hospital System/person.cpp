#include<iostream>
using namespace std;
class Person
{
private:
	string name;
	int ID;
public:
	Person(string name, int id)
	{
		this->name = name;
		ID = id;
	}
	virtual void display()
	{
		cout << "Name : " << name << "\n";
		cout << "ID : " << ID << "\n";
	}
	string get_name()
	{
		return name;
	}
	int get_ID()
	{
		return ID;
	}
};