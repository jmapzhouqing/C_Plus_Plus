#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(int price,int carNum){
	cout<<"Construct Car"<<endl;
	this->setProperty(price,carNum);
}

Car::~Car(){
	cout<<"Destruct Car"<<endl;
}

void Car::setProperty(int price,int carNum){
	this->price = price;
	this->carNum = carNum;
}

void Car::print(){
	cout<<"this card price is "<<price<<endl;
}
