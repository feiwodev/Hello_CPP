
/*
	CPP ���Զ���
*/

#include <iostream>

using namespace std;

class Songstr {
private:
	char* name;

public:
	Songstr(char* name) {
		this->name = name;
		cout << "Songstr���캯��" << endl;
	}

	char* getName() {
		return this->name;
	}

	~Songstr()
	{
		cout << "Songstr��������" << endl;
	}
};

class Music {
private:
	char* musicName;
	// ������д��ڶ����ֶΣ������������Ҫ���빹�캯������������Ҫ�ڵ�ǰ�๹�캯��)���棺���и�ֵ��ʼ��
	// Music(char* musicName,char* songstrName) : s(songstrName)
	Songstr s;

public:
	Music(char* musicName,char* songstrName) : s(songstrName) {
		this->musicName = musicName;
		cout << "Music���캯��" << endl;
	}

	void printInfo() {
		cout << "������ " << this->musicName << endl;
		cout << "���֣� " << this->s.getName() << endl;
	}

	~Music()
	{
		cout << "Music��������" << endl;
	}
};