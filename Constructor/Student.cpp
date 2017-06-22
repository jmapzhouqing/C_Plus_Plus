#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int id):id(id),score(0){
	cout<<"Construct student"<<endl;
}

Student::~Student(){
	cout<<"Destruct student"<<endl;
}

void fun(Student stu){
	cout<<"return from fun"<<endl;
}

int main(){
	Student student = Student(5);

	//

	//delete student;
	fun(student);

	cout<<"from main"<<endl;
	//fun(1002);
	//cout<<student.getId()<<endl;
	//cout<<student.getScore()<<endl;
	return 0;
}