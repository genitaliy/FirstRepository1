#include <iostream>
#include "Array.h"
#include "aaray.cpp"

int main()
{
	try
	{
		Array<Array<int>>myMass(5);
		//cout << myMass; 

		myMass.mass[0].Insert(1, 5);
		myMass.Insert(2, 0);
		myMass.Insert(3, 0);
		//cout << myMass;

		//cout<<myMass.Remove(2)<<endl;
		//cout << myMass;
	}
	catch (exception& exp)
	{
		cout << exp.what() << endl;
		throw;
	}
}