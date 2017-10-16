#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;

Student::Student(const char* pName,int ssId):id(ssId){
	if(pName!=NULL){
		int len = strlen(pName)+1;
		name = new char[len];
		memset(name, 0, len);
		strncpy(name,pName,len);
	}
	else {
		name = NULL;
	}
	cout<<"Construct student "<<pName<<endl;
}

Student::~Student(){
	if (this->name!=NULL) {
		delete[] name;
		name = NULL;
	}
	cout<<"Destruct student "<<name<<endl;
}


Student::Student(const Student& s){
	cout<<"Construct copy "<<s.name<<endl;
	if (s.name != NULL) {
		int len = strlen(s.name) + 1;
		this->name = new char[len];
		memset(this->name, 0, len);
		strcpy(this->name, s.name);
	}
	else {
		this->name = NULL;
	}
}

Student& Student::operator=(const Student& other) {
	if (&other == this) {
		return *this;
	}

	if (other.name != NULL) {
		if (this->name != NULL) {
			delete[] name;
			name = NULL;
		}
		int len = strlen(other.name) + 1;
		this->name = new char[len];
		memset(this->name, 0, len);
		strcpy(this->name, other.name);
	}
	return *this;
}


void fun(Student stu){
	cout<<"return from fun"<<endl;
}
