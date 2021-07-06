
#pragma once
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Employer
{
public:
	string name;
	string surname;
	void virtual Print() = 0;
};

class President: public Employer
{	
public:
	void Print() override;
};

class Manager: public Employer
{
public:
	void Print() override;
};

class Worker: public Employer
{
public:
	void Print() override;
};