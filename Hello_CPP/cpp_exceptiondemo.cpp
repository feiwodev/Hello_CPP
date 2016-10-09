
/*
	CPP exception

	�쳣����
*/

#include <iostream>

using namespace std;

/*�Զ����쳣��*/
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

	/*CPP �����׳��������͵�Exception*/
	void throwStringException() {
		throw "�׳��ַ�����Exception";
	}

	void throwIntException() {
		throw 1;
	}

	void throwObjectException() {
		// ��Ҫ���쳣ָ�� �� new�˶���ָ��֮��������� �� ���һ���������󸱱���ռ�ڴ�
		// ���б�׼�쳣���� �� �鿴API
		throw CustomException("�����Զ�������쳣");
	}

	/*�����쳣*/
	void catchException() {
		try
		{
			//throwStringException();
			//throwIntException();
			throwObjectException();
		}
		catch (char* e)
		{
			cout <<"����String���͵��쳣��Ϣ �� "<< e << endl;
		}
		catch (int e1) {
			cout << "����int���͵��쳣��Ϣ��" << e1 << endl;
		}
		catch (CustomException &ex) {
			cout << "�����Զ����쳣��" << ex.showMsg() << endl;
		}
	}

};


