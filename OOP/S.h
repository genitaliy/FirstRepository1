
#pragma once
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

static double Pi = 3.14;

class Square
{
public:
	void virtual S() = 0;
};

class Circle: public Square
{
public:
	int r;
	Circle(int _r = 5);
	void S() override;
};

class Rectangle : public Square
{
public:
	int a;
	int b;
	Rectangle(int _a = 10, int _b = 5);
	void S() override;
};

class Trangle : public Square
{
public:
	int a;
	int height;
	Trangle(int _a = 10, int _height = 5);
	void S() override;
};

class Trapezoid : public Square
{
public:
	int a;
	int b;
	int height;
	Trapezoid(int _a = 10, int _b = 5, int _height = 2);
	void S() override;
};