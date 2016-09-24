
/*
	CPP ���캯��
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
	// ���캯�� �� CPP�Ĺ��캯����Java�Ĺ��캯�� �� ��������
	// Ĭ�ϻ���һ���޲ι��캯�� �� �ڴ��������ʱ��ᱻ����
	Product(char* name,char* iconUrl,double price) {
		int strLen = strlen(name);
		// �˴������ڴ��1 �� ����Ϊ�ַ���һ��\0�Ľ�����
		this->name = (char*)malloc(strLen+1);
		strcpy(this->name, name);
		this->iconUrl = iconUrl;
		this->price = price;
	}

	// �������캯�� , Ĭ�Ͽ������캯��
	// Ĭ�Ͽ������� �� ������ֵ����
	// ������������� �� ��ָ��̬�ڴ�� �� ��ֻ�´��ָ���ڴ�ռ��ֵ
	// ���´����̬�ڴ�ռ� 
	/*Product(const Product &p) {
		this->name = p.name;
		this->iconUrl = p.iconUrl;
		this->price = p.price;
	}*/

	// ��� �� ����ڹ��캯���� �� ʹ���˶�̬�ڴ�
	// ����Ҫ�ڿ������캯����Ҳ��Ҫ����һ����̬�ڴ�
	// �ÿ����Ķ����뱻�����Ķ���һ�� �� ��Ȼ������������
	// ���ٶ�̬�ڴ�ʱ�����
	// 
	Product(const Product &p) {
		int strLen = strlen(p.name);
		this->name = (char*)malloc(strLen + 1);
		strcpy(this->name, p.name);
		this->iconUrl = p.iconUrl;
		this->price = p.price;

	}

	void printInfo() {
		cout << "��Ʒ���ƣ� " << this->name << endl;
		cout << "��ƷͼƬ�� " << this->iconUrl << endl;
		cout << "��Ʒ�۸� " << this->price << endl;
	}

	// �������� 
	// �������� �� �ڶ���ʹ�ý���֮ǰ���ã������ִ�еĺ���
	// ��������������������������β�Ĺ��� �� ���磺��̬�ڴ����
	// ���������͹��캯��һ�� �� �ᱻĬ�ϵ���
	~Product()
	{
		cout << "��������" << endl;
		// �ͷ�this->name �Ķ�̬�ڴ�ռ�
		free(this->name);
	}
};