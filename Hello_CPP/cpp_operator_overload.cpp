
/*
	operator overload demo

	运算符重载运算
*/

#include <iostream>

using namespace std;

/*坐标类*/
class Point {

	// 使用友元函数访问私有字段，完成运算符重载 ， 重载+
	friend Point operator+ (Point &p1, Point &p2);

	// 重载-
	friend Point operator-(Point &p1, Point &p2);

private:
	int x;
	int y;

public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void printInfo() {
		cout << "x = " << x << "    y = "<< y <<endl;
	}
};
