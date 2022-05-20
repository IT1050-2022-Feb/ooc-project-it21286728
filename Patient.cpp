//MLB 05.01 05 Online Medical Portal IT21286728
#include "Patient.h"
#include <cstring>
#include<iostream>
using namespace std;

Patient::Patient()
{
	patientId = 0;
	strcpy(patientName, "");
	age = 0;
	strcpy(address, "");
	strcpy(email, "");
}

Patient::Patient(int pId, char pName[40], int pAge, char pAddress[70], char pEmail[40])
{
	patientId = pId;
	strcpy(patientName, pName);
	age = pAge;
	strcpy(address, pAddress);
	strcpy(email, pEmail);
}

void Patient::setDetails(int pId, char pName[40], int pAge, char pAddress[70], char pEmail[40])
{
	patientId = pId;
	strcpy(patientName, pName);
	age = pAge;
	strcpy(address, pAddress);
	strcpy(email, pEmail);
}

void Patient::registerPatient()
{

}

void Patient::searchDoctors()
{

}

void Patient::displayDetails()
{
	cout << "Patient Details\n" << endl;
	cout << "Patient ID : " << patientId << endl;
	cout << "Patient Name: " << patientName << endl;
	cout << "Patient Age : " << age << endl;
	cout << "Patient Address : " << address << endl;
	cout << "Patient Email : " << email << endl;
}

Patient :: ~Patient()
{
	cout << "\nDestructor runs on Patient class" << endl;
}

