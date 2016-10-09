#pragma once

/*
	pudding 布丁 继承 Sweetie 甜点

	// 必须实现甜点类中的纯虚函数
*/
#include "Sweetie.h"

class Pudding : public Sweetie {
	
public:
	void getName();
};