#pragma once

class X {
public:
	void initialize();
	friend void g(X *, int);
	friend void h();
};
