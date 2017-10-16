// inherit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Animal.h"
#include <IOSTREAM>

using namespace std;

void func(Animal** par){
	//animal.makeSound();
	Dog* dog = new Dog(30);

	*par = (Animal*)dog;
	
	cout<<par<<endl;
	//(*an)->makeSound();
	
	//an->makeSound();
}

int main(int argc, char* argv[])
{
	
	Animal* cat = NULL;

	void* pObj = NULL;

	//cout<<<<endl;

	cout<<pObj<<endl;

	func(&cat);

	cat->makeSound();

	delete cat;
	
	return 0;
}

