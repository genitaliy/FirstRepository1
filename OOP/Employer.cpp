
#include "Employer.h"

void Employer::Print()
{
	cout << "Name: " << name << "Surname: " << surname << endl;
}

void President::Print()
{
	cout << "President: " << name << " " << surname<< endl;
}

void Manager::Print()
{
	cout << "Manager: " << name << " " << surname << endl;
}

void Worker::Print()
{
	cout << "Worker: " << name << " " << surname << endl;
}
