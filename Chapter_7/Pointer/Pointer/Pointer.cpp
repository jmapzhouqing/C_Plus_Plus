// Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	//const char* value[] = { "Hello,World","Name is jmap","Welcome!" };

	/*
	cout << sizeof(value)
		<< endl
		<< sizeof(value[0])
		<< endl
		<< sizeof(value) / sizeof(value[0]) << endl;*/

	//cout << *value << endl;

	//int value[2][4] = { {1,2,3,4},{5,6,7,8} };

	//int (*pvalue)[4] = value;
	/*
	string* *pwords = new string*[5];

	string value = "Hello,World";

	*pwords = &value;

	cout << **pwords << endl;*/

	/*
	float value = 2.5f;
	float* pvalue = &value;

	cout << hex << showbase << reinterpret_cast<unsigned int>(pvalue) << endl << reinterpret_cast<long *>(pvalue) << endl;*/

	/*
	int& ChangeValue(int& value);

	int value = 5;

	ChangeValue(value) = 50;

	cout << value << endl;*/

	long sum(long a,long b);

	long product(long a,long b);

	long(*pfun) (long, long) = 0;

	pfun = product;

	cout << pfun(3, 5) << endl;

	pfun = sum;

	cout << pfun(3, 5) << endl;

	system("pause");
	
    return 0;
}

int& ChangeValue(int& m) {
	return m;
}

long product(long a, long b) {
	return a * b;
}

long sum(long a, long b) {
	return a + b;
}




