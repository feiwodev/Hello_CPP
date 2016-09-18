
/*
	cpp class type
*/

#include <iostream>

using namespace std;

namespace CPP_CLASS
{
	class Animal {
	// C++ ����Ȩ�޷������η�
	private:
		char* name;
		int age;
	public:
		void setName(char* name) {
			this->name = name;
		}
		void setAge(int age) {
			this->age = age;
		}

		void showInfo() {
			cout << "���ƣ�" << this->name << " ���꣺" << this->age << endl;
		}
	};
}

/*
	CPP Struct
*/
namespace CPP_STRUCT
{
	// C++�ṹ����C�ṹ��֮ͬ������ �� ��C++�нṹ�����ֶκ���������Ȩ�����η����÷������÷�һ��
	// ���಻ͬ���� �� struct ���ܼ̳�
	struct Person
	{
	private:
		char* name;
		int age;
	public:
		void setName(char* name) {
			this->name = name;
		}
		void setAge(int age) {
			this->age = age;
		}

		void showPersonInfo() {
			cout << "������ " << this->name << "  ���䣺 " << this->age << endl;
		}
	};
}