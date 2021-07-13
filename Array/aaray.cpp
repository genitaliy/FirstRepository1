#include "Array.h"

template<typename T>
Array<T>::Array(int size)
{
	try 
	{
		if (size < 0 || size>1000000)
			throw invalid_argument("bad argument size:");
		this->mass = new T[size];
		this->size = size;
	}
	catch (exception& exp)
	{
		cout<< exp.what() << endl;
	}
}

template<typename T>
void Array<T>::Insert(T value, int index)
{
	try
	{
		if (index < 0 || index >= this->size)
			throw out_of_range("index <0 or > size of mass");
		T* helpMass = new T[size + 1];
		int i = 0;
		for (; i < index; ++i)
			helpMass[i] = this->mass[i];
		helpMass[i++] = value;
		for (; i < size; ++i)
			helpMass[i] = this->mass[i];
		delete[]this->mass;
		this->mass = helpMass;
		this->size++;
	}
	catch (exception& exp)
	{
		cout << "Error" << exp.what() << endl;
	}
}

//template<typename T>
//void Array<T>::Push(T value, int index)
//{
//	//T* a = new T[size + 1];
//	//for(; i<size+1; ++i)
//}

template<typename T>
T Array<T>::Remove(int index)
{
	try
	{
		if (index < 0 || index >= this->size)
			throw out_of_range("index <0 or > size of mass");
		T* helpMass = new T[size - 1];
		int i = 0;
		for (; i < index; ++i)
			helpMass[i] = this->mass[i];

		for (; i < size-1; ++i)
			helpMass[i] = this->mass[i+1];
		delete[]this->mass;
		this->mass = helpMass;
		this->size--;
		return helpMass;
	}
	catch (exception& exp)
	{
		cout << "remowe error" << exp.what() << endl;
		throw;
	}
}
