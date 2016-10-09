
/*
	CPP  template class 

	模板类 , 相当于Java的泛型类 , 模拟Java集合类
*/

#include <iostream>

using namespace std;

/*
	使用模板类加上纯虚函数模拟Java的Collection接口
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
	模拟Java的ArrayList集合
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
		// 在使用的时候指定模板类的类型
		ArrayList<int> a;
		a.add(1);
		cout << "使用CPP模板类, 模拟Java集合类" << endl;
	}

};
