
/*
	CPP ���� 
*/

#include <iostream>

namespace CPP_QUOTE {

	class Quote {
	public:
		int x = 10;

		// ���� �����Ǵ�������ı��������ò��Ὺ���µ��ڴ�ռ䣬��ָͬ��һ����ָ����Ǵ���������ڴ�ռ�
		// һ����Ϊ���������򷵻�ֵ
		// ����ʹ�÷���
		void swip(int &a, int &b) {
			int c = 0;
			c = a;
			a = b;
			b = c;
		}

		// ָ�뽻��
		void swip_p(int* a , int* b) {
			int c = 0; 
			c = *a;
			*a = *b;
			*b = c;
		}
	};

}