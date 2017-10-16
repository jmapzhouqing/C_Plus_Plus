#pragma once

class Y {
public:
	void initialize();
	friend void g(Y *, int);
	friend void h();
};
