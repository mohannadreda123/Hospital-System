#pragma once
#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
	string patientName;
	string doctorName;
	string date;
public:
	Date(string patientName, string doctorName, string date)
	{
		this->patientName = patientName;
		this->doctorName = doctorName;
		this->date = date;
	}
	void displayDate()
	{
		cout << "patientName : " << patientName << "\n";
		cout << "doctorName : " << doctorName << "\n";
		cout << "Date : " << date << "\n";
	}
};
