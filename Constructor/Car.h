#ifndef _CAR_H_
#define _CAR_H_

class Car{
public:
private:
	int price;
	int carNum;
public:
	Car(int price,int carNum);
	~Car();

	void run();
	void stop();
	void setProperty(int price,int carNum);
	void print();

private:

};
	


#endif