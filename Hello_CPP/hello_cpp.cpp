
/*
	hello_cpp.cpp is Hello_CPP Project main file

*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

// ֱ������Դ���ļ� �� ����Ŀ�в�����������
// ������Ϊ�˷�����ʾ �� ����д�����main����
// ��һ��cpp�ļ���Ϊ������Ŀ������ļ�
#include "cpp_namespace.cpp"
#include "cpp_class_and_struct.cpp"
#include "cpp_quote.cpp"

// ʹ��ͷ�ļ�
#include "Student.h"

// �ɱ����
#include "cpp_variable_parameter.cpp"

// ���Զ���
#include "cpp_attribute_object.cpp"

// ���캯��ʾ�������ļ�
#include "cpp_construct_function.cpp"

// ��׼�����ռ� �������ܶ��׼�Ķ��壩
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
	ʹ���Զ��������ռ�
*/
void useNameSpace() {

	A a; 
	a.sayHello();

	// Ƕ�������ռ�ʹ��
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
	C and C++ �ṹ�������
*/
void useCppStruct() {

	Person p;
	p.setName("zeno");
	p.setAge(20);

	p.showPersonInfo();

}

/* C++ ���õ�ʹ�� */
void useCppQuote() {

	Quote q;
	// Quote q �ı���
	Quote &q1 = q;

	q1.x = 100;

	printf("q���ڴ��ַ �� %#x , q1���ڴ��ַ��%#x\n", &q, &q1);

	cout << " q == " << q.x << endl;

	int x = 20, y = 40;

	q1.swip(x, y);

	cout << " q swipe  x = " << x << "  y = " << y << endl;

	// ָ��ֵ����
	q1.swip_p(&x, &y);

	cout << " ָ��ֵ���� ��   x = " << x << "  y = " << y << endl;
}

/*ʹ��ͷ�ļ�*/
/*.hͷ�ļ�����ֻ��Ҫ���� �� һ��ͷ�ļ������ж��ʵ���ļ���ʵ���ļ���ʵ���ຯ��
	��Ҫ�ں���ǰ����� className::��������������ʵ����ĺ��� ��
*/
void useCPP_H() {
	Student s;
	s.setName("zeno");
	s.setAge(20);
	s.setWeight(100.5);

	cout << "������" << s.getName() << "  ���䣺" << s.getAge() << "  ���أ�" << s.getWeight() << endl; 
}

/*���캯��*/
void useConstructFun() {

	// ʵ����һ���вι��캯���Ķ���
	Product p("iphone6","http://image.xzy.com/iphone6_pic.jpg",5000);
	p.printInfo();

}

/*�������캯��*/
void useCopyConstructFun() {
	Product p1("iphone6", "http://image.xzy.com/iphone6_pic.jpg", 5000);

	Product p2 = p1;

	p2.printInfo();
	
}

/*�����ɱ����*/
void useVariableParameter() {
	VariableParameter v;
	v.variableParams(1, 20,100.2,"����");
}

/*���Զ���*/
void useAttributeObject() {
	Music m("�հ׸�","����γ");
	m.printInfo();
}

/*ʹ��new�ؼ��ִ�������*/
void useNewKeyCreateObject() {
	// ʹ��new�ؼ��������� �� ����ڶ��ڴ��д���һ���ռ����洢��������
	// ��Ҫʹ��delete�ؼ��������ն��ڴ��е��ڴ�ռ� �� Ҳ����ʹ��free
	// ʹ��free�򲻻������������
	Music* m = new Music("���ڲ��ᣡ����","֣�л�");
	m->printInfo();

	// ����Ϊ���󿪱ٵĿռ�
	delete m;

	// newһ������
	int* arr = new int[];

	// ��������ռ�
	delete[] arr;
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

	system("pause");
}