
/*
	CPP exception

	异常处理
*/

#include <iostream>

using namespace std;

/*自定义异常类*/
class CustomException {

public:
	CustomException(char* msg) {
		this->msg = msg;
	}

	char* showMsg() {
		return this->msg;
	}

private:
	char* msg;
};

class ExceptionDemo {

public:

	/*CPP 可以抛出任意类型的Exception*/
	void throwStringException() {
		throw "抛出字符类型Exception";
	}

	void throwIntException() {
		throw 1;
	}

	void throwObjectException() {
		// 不要抛异常指针 ， new了对象指针之后必须销毁 ， 并且还会产生对象副本，占内存
		// 还有标准异常处理 ， 查看API
		throw CustomException("我是自定义对象异常");
	}

	/*捕获异常*/
	void catchException() {
		try
		{
			//throwStringException();
			//throwIntException();
			throwObjectException();
		}
		catch (char* e)
		{
			cout <<"捕获String类型的异常信息 ： "<< e << endl;
		}
		catch (int e1) {
			cout << "捕获int类型的异常信息：" << e1 << endl;
		}
		catch (CustomException &ex) {
			cout << "捕获自定义异常：" << ex.showMsg() << endl;
		}
	}

};


