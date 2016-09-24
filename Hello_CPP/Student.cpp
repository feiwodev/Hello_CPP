
#include "Student.h"

// set

void Student::setName(char* name) {
	this->name = name;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setWeight(float weight) {
	this->weight = weight;
}

// get
char* Student::getName() {
	return this->name;
}

int Student::getAge() {
	return this->age;
}

float Student::getWeight() {
	return this->weight;
}