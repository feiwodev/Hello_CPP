
/*
	cpp namespace demo
*/

#include <iostream>

/*
	�Զ��������ռ� �� �൱��Java�еİ� ��
	�����ռ����Ƕ��
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