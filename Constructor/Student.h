#ifndef _STUDENT_H_
#define _STUDENT_H_

class Student{
private:
	int id;
	int score;

public:
	Student(int id);
	~Student();
	
	inline int getId(){
		return this->id;	
	};

	void setId(int id){
		this->id = id;
	};

	int getScore(){
		return this->score;
	};
	void setScore(int score){
		this->score = score;
	};

};


#endif