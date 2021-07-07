
#include <iostream>
#include <string>

using namespace std;

bool Div(int a, int b)
{
	try
	{
		if (b == 0)
		{
			throw exception("divided by zero");
		}
		return a / b;
	}
	catch (...)
	{
		cout << "Exception in fun Div:  " << endl;
		throw;
	}
}


void Lalala(string a)
{
	int b;
	try {
		throw b;
	}
	catch (string b)
	{
		cout << b << " is not int." << endl;
	}
	cout << b; 

}

int main()
{
	////try
	////{
	////	cout << 1 << endl;
	////	throw exception("bad exp");
	////}
	////catch (int exp)
	////{
	////	cout << "Exception " << exp << endl;
	////}
	////catch (const char* exp)
	////{
	////	cout << "Exception " << exp << endl;
	////}
	////catch (...)
	////{
	////	cout << "All Exception " << endl;
	////}
	////cout << 2 << endl;
	//try
	//{
	//int c = Div(1,0);
	//cout << c << endl;
	//}
	//catch (exception exp)
	//{
	//	cout<<"Exception in fun Div:  "<<exp.what()<<endl;
	//}

 
	string b = "Hello";
	Lalala(b);

}
