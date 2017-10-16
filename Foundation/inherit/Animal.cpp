#include"stdafx.h"
#include "Animal.h"
#include <IOSTREAM>
using namespace std;

Animal::Animal(int age):age(age){
	cout<<"Animal construction"<<endl;
}

Animal::~Animal(){
	cout<<"Animal Destory"<<endl;
}

void Animal::makeSound() const{
	cout<<"Animal makeSound"<<endl;
}


int Animal::getAge() {
	cout<<this->age<<endl;
	return this->age;
}

void Animal::setAge(int age){
	this->age = age;
	cout<<"Animal set age"<<endl;
}

Dog::Dog(int age):Animal(age){
	cout<<"Dog construction"<<endl;
}

Dog::~Dog(){
	cout<<"Dog Destory"<<endl;
}

void Dog::setWeight(float weight){
	this->weight = weight;
}

void Dog::makeSound() const{
	cout<<"Dog makeSound"<<endl;
}

Cat::Cat(int age,int color):Animal(age),color(color){
	cout<<"Cat Construction"<<endl;
}

Cat::~Cat(){
	cout<<"Cat Destory"<<endl;
}

void Cat::makeSound() const{
	cout<<"Cat makeSound"<<endl;
}

