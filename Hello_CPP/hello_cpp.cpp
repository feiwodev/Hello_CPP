
/*
	hello_cpp.cpp is Hello_CPP Project main file

*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

// 直接引入源码文件 ， 在项目中不建议这样做 , 应为每个类都建一个头文件
// 这里是为了方便演示 ， 避免写过多的main函数
// 将一个cpp文件作为整个项目的入口文件
#include "cpp_namespace.cpp"
#include "cpp_class_and_struct.cpp"
#include "cpp_quote.cpp"

// 使用头文件
#include "Student.h"

// 可变参数
#include "cpp_variable_parameter.cpp"

// 属性对象
#include "cpp_attribute_object.cpp"

// 构造函数示例代码文件
#include "cpp_construct_function.cpp"

// 友元函数
#include "cpp_friend_function.cpp"

// 运算符重载
#include "cpp_operator_overload.cpp"

// 类基础
#include "cpp_inherit.cpp"

/*多态*/
#include "Meat.h"
#include "Chicken.h"
#include "Fish.h"

// 异常
#include "cpp_exceptiondemo.cpp"

// 模板类
#include "cpp_template_class.cpp"

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

	printf("q的内存地址 ： %#x , q1的内存地址：%#x\n", &q, &q1);

	cout << " q == " << q.x << endl;

	int x = 20, y = 40;

	q1.swip(x, y);

	cout << " q swipe  x = " << x << "  y = " << y << endl;

	// 指针值交换
	q1.swip_p(&x, &y);

	cout << " 指针值交换 ：   x = " << x << "  y = " << y << endl;
}

/*使用头文件*/
/*.h头文件里面只需要声明 ， 一个头文件可以有多个实现文件，实现文件中实现类函数
	需要在函数前面加入 className::这样才能算做是实现类的函数 。
*/
void useCPP_H() {
	Student s;
	s.setName("zeno");
	s.setAge(20);
	s.setWeight(100.5);

	cout << "姓名：" << s.getName() << "  年龄：" << s.getAge() << "  体重：" << s.getWeight() << endl; 
}

/*构造函数*/
void useConstructFun() {

	// 实例化一个有参构造函数的对象
	Product p("iphone6","http://image.xzy.com/iphone6_pic.jpg",5000);
	p.printInfo();

}

/*拷贝构造函数*/
void useCopyConstructFun() {
	Product p1("iphone6", "http://image.xzy.com/iphone6_pic.jpg", 5000);

	Product p2 = p1;

	p2.printInfo();
	
}

/*函数可变参数*/
void useVariableParameter() {
	VariableParameter v;
	v.variableParams(1, 20,100.2,"湖南");
}

/*属性对象*/
void useAttributeObject() {
	Music m("空白格","杨宗纬");
	m.printInfo();
}

/*使用new关键字创建对象*/
void useNewKeyCreateObject() {
	// 使用new关键创建对象 ， 则会在堆内存中创建一个空间来存储对象数据
	// 需要使用delete关键字来回收堆内存中的内存空间 ， 也可以使用free
	// 使用free则不会出发析构函数
	Music* m = new Music("决口不提！爱你","郑中基");
	m->printInfo();

	// 回收为对象开辟的空间
	delete m;

	//// new一个数组
	//int* arr = new int[];

	//// 回收数组空间
	//delete[] arr;
}

/* ----------------------------------友元函数------------------------------------------- */

/*友元函数实现 用来访问私有字段*/
void accessFriendFunctionFeild(FriendFunction *p, int id, char* name) {
	p->id = id;
	p->name = name;
}

/*友元函数使用*/
void useFriendFunction() {

	FriendFunction *f = new FriendFunction(1, "找不到你的方向");
	f->printfInfo();

	accessFriendFunctionFeild(f, 3, "我是你的眼");
	f->printfInfo();

	/*java中的Class对象，可以访问任意对象的任意字段，本质是Class类每个类的友元类*/
	FriendClass fc(f);
	fc.accessFriendFeild();
	f->printfInfo();
}

/* ------------------------------------------------------------------------------------- */

/* ----------------------------------运算符重载------------------------------------------- */

// 实现友元函数 , 进行运算符重载 , 重载+
Point operator+(Point &p1, Point &p2) {
	return Point(p1.x + p2.x, p1.y + p2.y);
}

// 重载- , 运算符的重载，本质还是函数调用
Point operator-(Point &p1, Point &p2) {
	return Point(p1.x - p2.x, p1.y - p2.y);
}

/*使用运算符重载*/
void useOperatorOverload() {
	Point p1(10, 10);
	Point p2(50, 50);
	Point p4(30, 10);

	// 重载+号运算符
	Point p3 = p1 + p2;

	p3.printInfo();

	Point p5 = p3 - p4;
	p5.printInfo();
}

/* ------------------------------------------------------------------------------------- */

/*使用继承*/
void useCppInherit() {

	Rose r(1,"美丽玫瑰");

	// 访问父类与子类的同名函数函数
	//r.Flower::printInfo();
	r.printInfo();
}

/* ----------------------------------多态------------------------------------------- */

void printMeatInfo(Meat &m) {
	m.getName();
}

/*使用多态*/
void usePolymorphism() {

	Chicken c;
	Fish f;

	printMeatInfo(c);
	printMeatInfo(f);
}

/* ------------------------------------------------------------------------------------- */

/* ----------------------------------模板函数------------------------------------------- */

/*
	模板函数 根据实际类型，自动推导
*/
template<typename T>
void anySwap(T &t1,T &t2) {
	T tmp = NULL;
	tmp = t1; 
	t1 = t2;
	t2 = tmp;
}

/*使用模板函数*/
void useTemplateFunc() {

	int i = 10; 
	int j = 30;

	anySwap(i, j);

	cout << "i = " << i << "   j = " << j << endl;

	cout << " ------- 字符交换 ---------" << endl;

	char* c1 = "思念在蔓延";
	char* c2 = "一通电话在世界两边";

	anySwap(c1, c2);

	cout << "c1 = " << c1 << "   c2 = " << c2 << endl;
}

/* ------------------------------------------------------------------------------------- */

// 异常
void useExceptionDemo() {

	ExceptionDemo e;
	e.catchException();

}

// 模板类
void useTemplateClassDemo() {
	templateClassDemo t;
	t.useTemplateClass();
}

void main() {

	// out
	cout << "cpp simple out" << endl;

	useNameSpace();

	useCppClass();

	useCppStruct();

	useCppQuote();

	useCPP_H();

	cout << "--------------------------------------------" << endl;

	useConstructFun();

	cout << "--------------------------------------------" << endl;

	useCopyConstructFun();

	cout << "--------------------------------------------" << endl;

	useVariableParameter();

	cout << "--------------------------------------------" << endl;

	useAttributeObject();

	cout << "--------------------------------------------" << endl;

	useNewKeyCreateObject();

	cout << "-------------------友元函数-------------------------" << endl;

	useFriendFunction();

	cout << "-------------------运算符重载-------------------------" << endl;
	useOperatorOverload();

	cout << "-------------------类继承-------------------------" << endl;
	useCppInherit();

	cout << "-------------------多态-------------------------" << endl;
	usePolymorphism();

	cout << "-------------------模板函数-------------------------" << endl;
	useTemplateFunc();

	cout << "-------------------异常处理-------------------------" << endl;
	useExceptionDemo();

	cout << "-------------------模板类-------------------------" << endl;
	useTemplateClassDemo();

	system("pause");
}