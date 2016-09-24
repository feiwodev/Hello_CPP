
/*
	CPP 构造函数
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Product {

private:
	char* name;
	char* iconUrl;
	double price;

public:
	// 构造函数 ， CPP的构造函数与Java的构造函数 ， 特性类似
	// 默认会有一个无参构造函数 ， 在创建对象的时候会被调用
	Product(char* name,char* iconUrl,double price) {
		int strLen = strlen(name);
		// 此处申请内存加1 ， 是因为字符有一个\0的结束符
		this->name = (char*)malloc(strLen+1);
		strcpy(this->name, name);
		this->iconUrl = iconUrl;
		this->price = price;
	}

	// 拷贝构造函数 , 默认拷贝构造函数
	// 默认拷贝函数 ， 本质是值拷贝
	// 如果拷贝变量中 ， 有指向动态内存的 ， 则只会拷贝指向内存空间的值
	// 不会拷贝动态内存空间 
	/*Product(const Product &p) {
		this->name = p.name;
		this->iconUrl = p.iconUrl;
		this->price = p.price;
	}*/

	// 深拷贝 ， 如果在构造函数中 ， 使用了动态内存
	// 则需要在拷贝构造函数中也需要申请一个动态内存
	// 让拷贝的对象与被拷贝的对象一致 ， 不然在析构函数中
	// 销毁动态内存时会出错
	// 
	Product(const Product &p) {
		int strLen = strlen(p.name);
		this->name = (char*)malloc(strLen + 1);
		strcpy(this->name, p.name);
		this->iconUrl = p.iconUrl;
		this->price = p.price;

	}

	void printInfo() {
		cout << "商品名称： " << this->name << endl;
		cout << "商品图片： " << this->iconUrl << endl;
		cout << "商品价格： " << this->price << endl;
	}

	// 析构函数 
	// 析构函数 ， 在对象使用结束之前调用，是最后执行的函数
	// 可以在析构函数里面做对象收尾的工作 ， 比如：动态内存回收
	// 析构函数和构造函数一样 ， 会被默认调用
	~Product()
	{
		cout << "析构函数" << endl;
		// 释放this->name 的动态内存空间
		free(this->name);
	}
};