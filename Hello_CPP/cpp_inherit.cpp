
/*
	cpp inherit demo 

	继承
*/

#include <iostream>

using namespace std;

class Flower {

protected:
	int id;
	char* name;

public:
	Flower(int id, char* name) {
		this->id = id;
		this->name = name;
	}

	void printInfo() {
		cout << "id = " << this->id << "    name = " << this->name << endl;
	}
};


/*
	CPP 可以进行多继承 ， 继承父类的的构造函数按照如下编写 ， 也可直接传入默认值
	//继承的二义性
	//虚继承，不同路径继承来的同名成员只有一份拷贝，解决不明确的问题

	//继承的访问修饰
	//基类中      继承方式             子类中
	//public     ＆ public继承 = > public
	//public     ＆ protected继承 = > protected
	//public     ＆ private继承 = > private
	//
	//protected  ＆ public继承 = > protected
	//protected  ＆ protected继承 = > protected
	//protected  ＆ private继承 = > private
	//
	//private    ＆ public继承 = > 子类无权访问
	//private    ＆ protected继承 = > 子类无权访问

*/
class Rose : public Flower {

public:
	/*子类继承父类，父类有构造函数，需要子类传入，则在构造函数后面使用:父类名(传入参数)*/
	Rose(int id, char*name) : Flower(id, name) {

	}

	void printInfo() {
		cout << "id = " << this->id << "    name = " << name << " -- "<< endl;
	}
};