#pragma once


/*����һ������*/
class Student {
	
private:
	char* name;
	int age;
	float weight;

public:
	void setName(char* name);
	void setAge(int age);
	void setWeight(float weight);

	char* getName();
	int	  getAge();
	float getWeight();

};