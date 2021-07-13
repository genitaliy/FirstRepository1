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
		cout << exp.what() << endl;
	}
}

template<typename T>
void Array<T>::Insert(T value, int index)
{

}

template<typename T>
void Array<T>::Push(T value, int index)
{

}

template<typename T>
T Array<T>::Remove(int index)
{
	return T();
}
