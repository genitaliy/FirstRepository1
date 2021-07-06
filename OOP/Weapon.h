
#pragma once
#include<iostream>
#include<string>

class Weapon
{
public:
	int count = 0;
	void virtual OneUse() = 0;
	void Attact(int count, int time);
};
