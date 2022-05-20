#include<iostream>
#include "Channel.h"
#include "Patient.h"
using namespace std;

int main(void)
{
	Channel* c1;
  	Patient* p1;

	c1 = new Channel();
  p1 = new Patient();

	c1->setDetails(01, "Tharindu", "200018302847", 22, "Dr. Romesh", "2022-05-16", "18:30");
  p1->setDetails(01, "Mahesh", 23, "73/19, new kandy road, Malabe", "mahesh.k@gmail.com");

	c1->displayChannel();
	p1->displayDetails();
	
  delete c1;
  delete p1;

	return 0;
}
