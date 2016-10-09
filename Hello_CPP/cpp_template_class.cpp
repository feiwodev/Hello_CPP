
/*
	CPP  template class 

	ģ���� , �൱��Java�ķ����� , ģ��Java������
*/

#include <iostream>

using namespace std;

/*
	ʹ��ģ������ϴ��麯��ģ��Java��Collection�ӿ�
*/
template <typename T>
class Collection {

public:
	virtual void add(T t) = 0;
	virtual void del(T t) = 0;
	virtual void change(int index, T t) = 0;
	virtual T*  query() = 0;
};

/*
	ģ��Java��ArrayList����
*/
template <typename T>
class ArrayList : public Collection<T> {
	
public:
	void add(T t) {

	}

	void del(T t) {

	}

	void change(int index, T t) {

	}
	T*  query() {
		return NULL;
	}
};

class templateClassDemo {

public:
	void useTemplateClass() {
		// ��ʹ�õ�ʱ��ָ��ģ���������
		ArrayList<int> a;
		a.add(1);
		cout << "ʹ��CPPģ����, ģ��Java������" << endl;
	}

};
