
/*
	CPP �ɱ����
*/

#include <stdarg.h>
#include <iostream>

using namespace std;

class VariableParameter
{
public:

	/*�ɱ����*/
	void VariableParameter::variableParams(int i, ...)
	{
		// �ɱ�����б�
		va_list ap_list;
		// ��...֮ǰ�ĵ�һ��������ʼ��������ǿɱ����
		va_start(ap_list, i);
		// �õ��ɱ���� �� �����ٿɱ�����б�  �� �����ڲ������͡�
		int age = va_arg(ap_list, int);
		double weight = va_arg(ap_list, double);
		char* registry = va_arg(ap_list, char*);
		va_end(ap_list);

		cout << "���: " << i << " ���䣺 " << age << " ���أ� " << weight << "  ���᣺ " << registry << endl;
	}

};


