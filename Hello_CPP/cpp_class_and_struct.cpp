
/*
	cpp class type
*/

#include <iostream>

using namespace std;

namespace CPP_CLASS
{
	class Animal {
	// C++ 共用权限访问修饰符
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
			cout << "名称：" << this->name << " 年岁：" << this->age << endl;
		}
	};
}

/*
	CPP Struct
*/
namespace CPP_STRUCT
{
	// C++结构体与C结构不同之处在于 ， 在C++中结构体内字段函数可以有权限修饰符，用法和类用法一致
	// 和类不同的是 ， struct 不能继承
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
			cout << "姓名： " << this->name << "  年龄： " << this->age << endl;
		}
	};
}