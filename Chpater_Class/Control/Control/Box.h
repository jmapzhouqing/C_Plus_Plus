#pragma once
#ifndef BOX_H
#define BOX_H
#include <string>
class Box {
public:
	Box(float length,float width,float height,std::string name);
	Box();
	~Box();

	float volume();

	bool operator>(Box box);

private:
	float length;
	float width;
	float height;
	std::string name;
};
#endif // !BOX_H
