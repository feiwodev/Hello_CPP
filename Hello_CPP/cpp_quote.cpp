
/*
	CPP 引用 
*/

#include <iostream>

namespace CPP_QUOTE {

	class Quote {
	public:
		int x = 10;

		// 引用 ，就是传入变量的别名，引用不会开辟新的内存空间，如同指针一样，指向的是传入变量的内存空间
		// 一般作为函数参数或返回值
		// 引用使用方便
		void swip(int &a, int &b) {
			int c = 0;
			c = a;
			a = b;
			b = c;
		}

		// 指针交换
		void swip_p(int* a , int* b) {
			int c = 0; 
			c = *a;
			*a = *b;
			*b = c;
		}
	};

}