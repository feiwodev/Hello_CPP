
/*
	CPP 属性对象
*/

#include <iostream>

using namespace std;

class Songstr {
private:
	char* name;

public:
	Songstr(char* name) {
		this->name = name;
		cout << "Songstr构造函数" << endl;
	}

	char* getName() {
		return this->name;
	}

	~Songstr()
	{
		cout << "Songstr析构函数" << endl;
	}
};

class Music {
private:
	char* musicName;
	// 如果类中存在对象字段，而这个对象需要传入构造函数参数，则需要在当前类构造函数)后面：进行赋值初始化
	// Music(char* musicName,char* songstrName) : s(songstrName)
	Songstr s;

public:
	Music(char* musicName,char* songstrName) : s(songstrName) {
		this->musicName = musicName;
		cout << "Music构造函数" << endl;
	}

	void printInfo() {
		cout << "歌曲： " << this->musicName << endl;
		cout << "歌手： " << this->s.getName() << endl;
	}

	~Music()
	{
		cout << "Music析构函数" << endl;
	}
};