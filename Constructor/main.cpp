#include<iostream>
#include<STDLIB.H>
using namespace std;

class A{
public:
	A(){
		cout<<"A created"<<endl;
	}

	~A(){
		cout<<"A destoryed"<<endl;
	}
};

class B{
public:
	B(){
		cout<<"B created"<<endl;
	}
	~B(){
		cout<<"B destoryed"<<endl;
	}
};

int foo(void){
	printf("foo()------------------\n");
	A localA;
	static B localB;
	printf("foo()<--------------------\n");
	return 0;
}
