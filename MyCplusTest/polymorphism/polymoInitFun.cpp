//
//  polymoInitFun.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/11/14.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "polymoInitFun.hpp"

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

int main()
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
