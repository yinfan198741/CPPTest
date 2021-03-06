//
//  polymoInitFun.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/11/14.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "polymoInitFun.hpp"
#include "extendAbstract.cpp"
#include "abstractInterfaceB.hpp"
#include "abstractInterface.hpp"

#include <iostream>
using namespace std;

pl::pl()
{
	cout<<"父构造函数调用多肽函数1,构造函数中的多肽不会执行"<<endl;
	this->printfunc();
	cout<<"父构造函数调用多肽函数2"<<endl;
}


void pl::printfunc()
{
	cout<<"parent  pl::printfunc" <<endl;
}

pl::~pl()
{
	cout<<"~pl() p = " << this <<endl;
}

void cl::printfunc()
{
	cout<<"child  ci::printfunc" <<endl;
}


cl::cl()
{
	cout<<"子构造函数调用多肽函数1"<<endl;
	this->printfunc();
	cout<<"子构造函数调用多肽函数2"<<endl;
}

cl::~cl()
{
	cout<<"~cl() p = " << this <<endl;
}


void printTest(pl& p)
{
	p.printfunc();
}

void deleteTest(pl& p)
{
	cout<<"删除基类"<<endl;
	delete &p;
}

int mainPPP()
{
	cout<<"polymoInitFun"<<endl;
	
//	pl p;
//	p.printfunc();
//	cl c;
//	c.printfunc();
//
//	printTest(p);
//	printTest(c);
//
//	cout<<"polymoInitFun ====== "<<endl;
//
//	pl* pp = &c;
//	printTest(*pp);
	
	
	pl* cp = new cl();
	cout<<"多肽"<<endl;
	printTest(*cp);
	cout<<"销毁"<<endl;
	deleteTest(*cp);
	
	return 0;
}

void TT(int &a)
{
	a = 5;
}


void TT2(int *a)
{
	*a = 4;
}

//int mainpp4()
//{
//
//	
//	cout<<"main"<<endl;
//	extendText t;
//	int r = t.add(1, 2);
//	
//	interfaceA* fa = &t;
//	int r2 = fa->add(2,2);
//	
//	interfaceB* fa2 = &t;
//	int r3 = fa2->add(4,4);
//	
//	cout<<" r = " << r <<endl;
//	cout<<" r2 = " << r2 <<endl;
//	cout<<" r3 = " << r3 <<endl;
//	cout<<" 多重继承接口类型没有二异性(类中只有抽象方法) "<< endl;
//	
//	int a = 7;
//	cout<<" a = " << a <<endl;
//	TT(a);
//	cout<<" a1 = " << a <<endl;
//	TT2(&a);
//	cout<<" a2 = " << a <<endl;
//}
