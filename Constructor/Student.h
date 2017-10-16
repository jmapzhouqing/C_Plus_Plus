#ifndef _STUDENT_H_
#define _STUDENT_H_

class Student{
public:
	int id;
	int score;
	char* name;

public:
	Student(const char* pName,int id);
	~Student();
	
	inline int getId() const{
		return this->id;	
	};

	void setId(int id){
		this->id = id;
	};

	int getScore() const{
		return this->score;
	};
	void setScore(int score){
		this->score = score;
	};

private:
	Student(const Student&);
	Student& operator=(const Student& other);
};


#endif