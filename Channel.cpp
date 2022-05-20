//MLB 05.01 05 Online Medical Portal IT21286728
#include "Channel.h"
#include<cstring>
#include<iostream>
using namespace std;

Channel::Channel()
{
	channelId = 0;
	strcpy(patientName, "");
	strcpy(nic, "");
	age = 0;
	strcpy(doctorName, "");
	strcpy(date, "");
	strcpy(time, "");
}

Channel::Channel(int cId, char pName[40], char pNic[15], int pAge, char docName[50], char pDate[20], char pTime[8])
{
	channelId = cId;
	strcpy(patientName, pName);
	strcpy(nic, pNic);
	age = pAge;
	strcpy(doctorName, docName);
	strcpy(date, pDate);
	strcpy(time, pTime);	
}

void Channel::setDetails(int cId, char pName[40], char pNic[15], int pAge,  char docName[50], char pDate[20], char pTime[8])
{
	channelId = cId;
	strcpy(patientName, pName);
	strcpy(nic, pNic);
	age = pAge;
	strcpy(doctorName, docName);
	strcpy(date, pDate);
	strcpy(time, pTime);
}

void Channel::channelDoctor()
{

}

void Channel::cancelChannel()
{

}

void Channel::displayChannel()
{
	cout << "\nChannel Details\n" << endl;
	cout << "Channel id : " << channelId << endl;
	cout << "Patient name : " << patientName << endl;
	cout << "Patient nic : " << nic << endl;
	cout << "Patient age :" << age << endl;
	cout << "Doctor name : " << doctorName << endl;
	cout << "Channel date : " << date << endl;
	cout << "Channel time : " << time << endl;	
}

Channel :: ~Channel()
{
	cout << "\nDestructor runs on channel class" << endl;
}