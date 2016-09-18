
/*
	cpp namespace demo
*/

#include <iostream>

/*
	自定义命名空间 ， 相当于Java中的包 。
	命名空间可以嵌套
*/
namespace NSP_A
{
	class A {
	public:
		void sayHello() {
			std::cout << "say Hello " << std::endl;
		}
	};

	namespace NSP_A_1
	{
		class A {
		public:
			void sayHello() {
				std::cout << "Say Hello 1" << std::endl;
			}
		};
	}
}