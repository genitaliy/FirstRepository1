#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Array
{
private:
	T* mass = NULL;
	int size = 0;
public:
	Array(int = 0);

	template<typename T>
	ostream& operator<<(ostream& out, Array& arr)
	{
		try
		{
			if (arr.mass == NULL)
				throw invalid_argument("null mass argument");
			for (int i = 0; i < arr.size; i++)
			{
				out << arr.mass[i] << endl;
			}
			out << endl;
			return out;
		}
		catch (exception& exp)
		{
			cout << exp.what() << endl;
		}
	}
	void Insert(T value, int index = 0);
	//void Push(T value, int index=0);
	T Remove(int index);
};

