
/*
	operator overload demo

	�������������
*/

#include <iostream>

using namespace std;

/*������*/
class Point {

	// ʹ����Ԫ��������˽���ֶΣ������������� �� ����+
	friend Point operator+ (Point &p1, Point &p2);

	// ����-
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
