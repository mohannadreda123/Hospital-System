#include<iostream>
#include"hospital.cpp"
using namespace std;
int main()
{
	Hospital manager;
	manager.add_patient(Patient("Ahmed", 12345, "flu"));
	manager.add_patient(Patient("Mohamed", 67891, "rgvf"));
	manager.add_patient(Patient("Osama", 25847, "ref"));

	manager.add_doctor(Doctor("Mohannad", 97564, "lkfjh"));
	manager.add_doctor(Doctor("Amr", 13648, "fjger"));
	manager.add_doctor(Doctor("Mahmoud", 24910, "ffjulu"));

	manager.add_date(Date("Ahmed", "Mohannad", "12\\9\\2026"));
	manager.add_date(Date("Mohamed", "Amr", "20\\7\\2026"));
	manager.add_date(Date("Osama", "Mahmoud", "5\\8\\2026"));

	manager.display_patient();
	manager.display_doctor();
	manager.display_date();
	return 0;
}
