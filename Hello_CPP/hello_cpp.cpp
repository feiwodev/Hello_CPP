
/*
	hello_cpp.cpp is Hello_CPP Project main file

*/

#include <iostream>
#include "cpp_namespace.cpp"
#include "cpp_class_and_struct.cpp"
#include "cpp_quote.cpp"

// 标准命名空间 （包含很多标准的定义）
using namespace std;

// use namespace
using namespace NSP_A;

/* CPP Class */
using namespace CPP_CLASS;

/* CPP Struct */
using namespace CPP_STRUCT;

/* CPP Quote */
using namespace CPP_QUOTE;

/*
	使用自定义命名空间
*/
void useNameSpace() {

	A a; 
	a.sayHello();

	// 嵌套命名空间使用
	NSP_A_1::A a2;
	a2.sayHello();

}

/*
	Simple CPP Class
*/
void useCppClass() {

	Animal animal;
	animal.setName("dog");
	animal.setAge(2);

	animal.showInfo();

}

/*
	C and C++ 结构体的区别
*/
void useCppStruct() {

	Person p;
	p.setName("zeno");
	p.setAge(20);

	p.showPersonInfo();

}

/* C++ 引用的使用 */
void useCppQuote() {

	Quote q;
	// Quote q 的别名
	Quote &q1 = q;

	q1.x = 100;

	cout << " q == " << q.x << endl;

	int x = 20, y = 40;

	q1.swip(x, y);

	cout << " q swipe  x = " << x << "  y = " << y << endl;

	// 指针值交换
	q1.swip_p(&x, &y);

	cout << " 指针值交换 ：   x = " << x << "  y = " << y << endl;
}

void main() {

	// out
	cout << "cpp simple out" << endl;

	useNameSpace();

	useCppClass();

	useCppStruct();

	useCppQuote();

	system("pause");
}