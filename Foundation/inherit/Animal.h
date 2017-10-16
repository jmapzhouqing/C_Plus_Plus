#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal{
public:Animal(int age);
	   ~Animal();

	   void setAge(int age);
	   int getAge();
	   virtual void makeSound() const = 0;

private:
	int age;
};


class Cat:public Animal{
public:
	Cat(int age,int color);
	~Cat();

	int getColor() const;
	void setColor(int color);
	virtual void makeSound() const;

private:
	int color;
};

class Dog:public Animal{
public:
	Dog(int age);
	~Dog();
	
	virtual void makeSound() const;
	void setWeight(float weight);
	float getWeight() const;

private:
	float weight;
};
#endif