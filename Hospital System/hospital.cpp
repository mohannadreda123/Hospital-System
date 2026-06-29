#pragma once
#include<iostream>
#include"doctor.cpp"
#include"patient.cpp"
#include"date.cpp"
#include<vector>
using namespace std;
class Hospital
{
private:
	vector<Patient>patients;
	vector<Doctor>doctors;
	vector<Date>dates;
public:
	void add_patient(Patient patient)
	{
		patients.push_back(patient);
	}
	void add_doctor(Doctor doctor)
	{
		doctors.push_back(doctor);
	}
	void add_date(Date date)
	{
		dates.push_back(date);
	}
	void display_patient()
	{
		cout << "Patient List\n";
		for (int i = 0; i < patients.size(); i++)
		{
			patients[i].display();
		}
	}
	void display_doctor()
	{
		cout << "doctor List\n";
		for (int i = 0; i < doctors.size(); i++)
		{
			doctors[i].display();
		}
	}
	void display_date()
	{
		cout << "date List\n";
		for (int i = 0; i < dates.size(); i++)
		{
			dates[i].displayDate();
		}
	}
};
