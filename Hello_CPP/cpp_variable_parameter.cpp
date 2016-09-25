
/*
	CPP 可变参数
*/

#include <stdarg.h>
#include <iostream>

using namespace std;

class VariableParameter
{
public:

	/*可变参数*/
	void VariableParameter::variableParams(int i, ...)
	{
		// 可变参数列表
		va_list ap_list;
		// 从...之前的第一个参数开始，后面就是可变参数
		va_start(ap_list, i);
		// 得到可变参数 ， 参数①可变参数列表  ， 参数②参数类型。
		int age = va_arg(ap_list, int);
		double weight = va_arg(ap_list, double);
		char* registry = va_arg(ap_list, char*);
		va_end(ap_list);

		cout << "编号: " << i << " 年龄： " << age << " 体重： " << weight << "  籍贯： " << registry << endl;
	}

};


