
/*
	cpp inherit demo 

	�̳�
*/

#include <iostream>

using namespace std;

class Flower {

protected:
	int id;
	char* name;

public:
	Flower(int id, char* name) {
		this->id = id;
		this->name = name;
	}

	void printInfo() {
		cout << "id = " << this->id << "    name = " << this->name << endl;
	}
};


/*
	CPP ���Խ��ж�̳� �� �̳и���ĵĹ��캯���������±�д �� Ҳ��ֱ�Ӵ���Ĭ��ֵ
	//�̳еĶ�����
	//��̳У���ͬ·���̳�����ͬ����Աֻ��һ�ݿ������������ȷ������

	//�̳еķ�������
	//������      �̳з�ʽ             ������
	//public     �� public�̳� = > public
	//public     �� protected�̳� = > protected
	//public     �� private�̳� = > private
	//
	//protected  �� public�̳� = > protected
	//protected  �� protected�̳� = > protected
	//protected  �� private�̳� = > private
	//
	//private    �� public�̳� = > ������Ȩ����
	//private    �� protected�̳� = > ������Ȩ����

*/
class Rose : public Flower {

public:
	/*����̳и��࣬�����й��캯������Ҫ���ഫ�룬���ڹ��캯������ʹ��:������(�������)*/
	Rose(int id, char*name) : Flower(id, name) {

	}

	void printInfo() {
		cout << "id = " << this->id << "    name = " << name << " -- "<< endl;
	}
};