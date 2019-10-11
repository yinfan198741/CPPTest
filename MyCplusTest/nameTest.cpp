//
//  nameTest.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/7.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "nameTest.hpp"

using namespace std;
//int main() {
//	cout<<"nameTest"<<endl;
//	
//	nameTest* nt = new nameTest();
//	nt->nameTestFunciton();
//	nt->threeFunction();
//	nt->constTest();
//	
//	return 0;
//}


namespace AAA {
	int a = 5;
}

namespace  BBB{
	int a = 6;
	namespace  CCC{
		int a = 7;
		struct teacher{
			char name[10];
			int age ;
		};
	}
}



void nameTest::nameTestFunciton() {
	cout<<"nameTestFunciton"<<endl;
	
	
	using namespace AAA;
	cout<< "using namespace AAA = " << a << endl;
//	using namespace BBB;
//	cout<< "using namespace BBB" << a << endl;
	
	int a = AAA::a;
	int b = BBB::a;
	int c = BBB::CCC::a;
	cout<< a << endl;
	cout<< b << endl;
	cout<< c << endl;
	
	BBB::CCC::teacher t = {"abc",10};
	cout<< "t.name = " << t.name << endl;
	cout<< "t.age = " << t.age << endl;
}

void nameTest::threeFunction () {
	cout<<"threeFunction"<<endl;
	int a = 10;
	int b = 20;
	int c = 30;
	
	cout<<" before a = "<< a << " b = "<< b << " c = "<< c <<  endl;
	
	(a > b ? a : b) = c;
	
	cout<<" after  a = "<< a << " b = "<< b << " c = "<< c <<  endl;
}


void  nameTest::constTestParamter(int * const  p)
{
	int a = 32;
//	p = &a;
//	Cannot assign to variable 'p' with const-qualified type 'int *const'
//	const p 是指针不能改变
	cout << " const int p = " << *p<< endl;
}


void  nameTest::constTestParamterTow(const int * p)
{
	//*p = 32;
	//	read-only variable is not assignable
	//	*p 内容不能改变
	cout << " const int p = " << *p<< endl;
}


void nameTest::constTest() {
	cout<<"constTest"<<endl;
	const int a = 5;
//	annot assign to variable 'a' with const-qualified type 'const int
//	a = 6;
	
	int const b = 6;
//	annot assign to variable 'a' with const-qualified type 'const int
// const int int const 一样 都是变量不能变动
//	b = 7;
	
	int c = 5;
	int g = 8;
	const int *d = &c;
	c = 6;
//	*d = 7;
//	Read-only variable is not assignable
	
	d = &g;
	
	cout << " const int d = " << *d<< endl;
//	int * const d;
	
	int * const f = &c;
	*f = 9;
//	Read-only variable is not assignable
	cout << " const int f = " << *f<< endl;
//	f = &g;
//	cannot assign to variable 'f' with const-qualified type 'int *const'
	cout << " const int f = " << *f<< endl;
	
	this->constTestParamter(f);
}
