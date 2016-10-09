
/*
	friend function demo

	// 友元函数可以访问一个类的任何字段和函数
*/

#include <iostream>

using namespace std;

class FriendFunction {

	// 创建一个友元函数 ， 用来访问私有字段 ， 需要在外部实现函数
	friend void accessFriendFunctionFeild(FriendFunction *p, int id, char* name);

	// 友元类 ， 友元类可以访问此类任意字段和函数
	friend class FriendClass;

// 类私有字段 , 私有字段，常规访问需要创建public get的访问函数 , 不能进行直接访问
private:
	int id;
	char* name;


public:
	FriendFunction(int id, char* name) {
		this->id = id;
		this->name = name;
	}

	void printfInfo() {
		cout << "id = " << this->id << "   name = " << this->name << endl;
	}

};

/*作为类的友元类，可以修改类中任意字段与函数*/
class FriendClass {

private:
	FriendFunction *f;

public:
	FriendClass(FriendFunction *f) {
		this->f = f;
	}

	void accessFriendFeild() {
		f->id = 100;
		f->name = "友元类修改";
	}

};



