#include <STDIO.H>
#include "Student.h"
#include<IOSTREAM>

using namespace std;

void foo(Student stu){
	cout<<"In fun foo"<<endl;
	printf("&stu=%x",&stu);
}

Student bar(){
	Student tom("tom",112);
	return tom;
}

void zoo(int val){
	printf("&val = %x\n",&val);
	val = 100;
}


int main(){

	cout<<"Enter main----->"<<endl;
	Student joe("Joe",111);
	Student john = joe;
	//delete joe;
	
	//printf("john name is %s",john->name);
	
	getchar();
	return 0;
}