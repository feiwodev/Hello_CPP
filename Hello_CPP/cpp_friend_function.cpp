
/*
	friend function demo

	// ��Ԫ�������Է���һ������κ��ֶκͺ���
*/

#include <iostream>

using namespace std;

class FriendFunction {

	// ����һ����Ԫ���� �� ��������˽���ֶ� �� ��Ҫ���ⲿʵ�ֺ���
	friend void accessFriendFunctionFeild(FriendFunction *p, int id, char* name);

	// ��Ԫ�� �� ��Ԫ����Է��ʴ��������ֶκͺ���
	friend class FriendClass;

// ��˽���ֶ� , ˽���ֶΣ����������Ҫ����public get�ķ��ʺ��� , ���ܽ���ֱ�ӷ���
private:
	int id;
	char* name;


public:
	FriendFunction(int id, char* name) {
		this->id = id;
		this->name = name;
	}

	void printfInfo() {
		cout << "id = " << this->id << "   name = " << this->name << endl;
	}

};

/*��Ϊ�����Ԫ�࣬�����޸����������ֶ��뺯��*/
class FriendClass {

private:
	FriendFunction *f;

public:
	FriendClass(FriendFunction *f) {
		this->f = f;
	}

	void accessFriendFeild() {
		f->id = 100;
		f->name = "��Ԫ���޸�";
	}

};



