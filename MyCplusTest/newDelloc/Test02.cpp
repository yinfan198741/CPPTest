//
//  Test02.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/19.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Test02.hpp"
#include "iostream"
using namespace std;

class AA
{
public:
	AA() //无参构造函数 默认构造函数
	{
		cout<<"我是构造函数，自动被调用了"<<endl;
	}
	AA(int _a) //无参构造函数 默认构造函数
	{
		a = _a;
	}
	AA(const AA &obj2)
	{
		cout<<"我也是构造函数，我是通过另外一个对象obj2，来初始化我自己"<<endl;
		a = obj2.a + 10;
	}
	~AA()
	{
		cout<<"我是析构函数，自动被调用了"<<endl;
	}
	void getA()
	{
		printf("a:%d \n", a);
	}
protected:
private:
	int a;
};

//单独搭建一个舞台
void ObjPlay01()
{
	AA a1; //变量定义
	
	//赋值构造函数的第一个应用场景
	//我用对象1 初始化 对象2
	AA a2 = a1; //定义变量并初始化
	
	a2 = a1; //用a1来=号给a2 编译器给我们提供的浅copy
}

//单独搭建一个舞台
void ObjPlay02()
{
	AA a1(10); //变量定义
	
	//赋值构造函数的第一个应用场景
	//我用对象1 初始化 对象2
	AA a2(a1); //定义变量并初始化
	
	//a2 = a1; //用a1来=号给a2 编译器给我们提供的浅copy
	a2.getA();
}

//int main()
//{
//	ObjPlay01();
//	system("pause");
//	return 0;
//}



class Test02
{
public:
	Test02() //无参构造函数 默认构造函数
	{
		p = (char *)malloc(100);
		strcpy(p, "11111");
		cout<<"我是构造函数，自动被调用了"<<endl;
	}
	
	Test02(int _a=0, int _b=0) //无参构造函数 默认构造函数
	{
		p = (char *)malloc(100);
		strcpy(p, "11111");
		a = _a;
		b = _b;
		cout<<"我是构造函数，自动被调用了"<<endl;
	}
	
	
	~Test02()
	{
		cout<<"我是析构函数，自动被调用了"<<endl;
		if (p != NULL)
		{
			free(p);
		}
		
	}
protected:
private:
	int a;
	int b;
	char *p ;
};

//单独搭建一个舞台
void ObjPlay2()
{
	Test02 t1(1, 2);
	
	Test02 t2 = (1, 2);
	
	Test02 t3 = Test02(3, 4);
	cout<<"展示t1的生命周期"<<endl;
}

//int main()
//{
//	ObjPlay2();
//	system("pause");
//	return 0;
//}
