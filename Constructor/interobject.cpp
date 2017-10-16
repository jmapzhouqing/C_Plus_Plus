#include<STDIO.H>

class A{
public:
	A(){
	printf("A created");
	}
	~A(){
		printf("A destory");
	}

	A(const A& a){
		printf("A created with a copy");
	}
};

A* foo(A a){
	printf("foo------------->\n");
	A *p = new A();
	printf("foo<-------------\n");
	return p;
}

A* boo(const A& a){
	printf("boo---------------->\n");
	A* p = new A();
	printf("boo<----------------\n");
	return p;
}
