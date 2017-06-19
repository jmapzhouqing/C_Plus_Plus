#include "stdafx.h"
#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(float length,float width,float height,std::string name):length(length),width(width),height(height),name(name) {
	cout << "Construction 2 construct " + name << endl;
}

Box::Box() {
	cout << "Construction 1 construct "<< endl;
}

Box::~Box() {
	cout << "DeConstruct" << endl;
}