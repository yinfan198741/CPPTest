//
//  Complex.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/20.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include "iostream"
using namespace std;

class Complex {
	
private:
	int a;
	int b;
public:

	friend class moreComplex; //指定友元class 可以访问私有属性
	friend Complex operator+(Complex& A,Complex& B);
	
	friend ostream& operator<<(ostream& os, Complex& b);
	
	friend void staticFriendCallPrivate( Complex* &b); ///友元函数是可以调用私有成员的
//	friend Complex& operator++(Complex& A);      //前置++ 先加后用
//	friend Complex operator++(Complex& A,int a);      //后置++ 先用后加
	
	Complex(int A,int B);
	Complex(const Complex& c);
	~ Complex(){
		cout<<"Complex delloc this = "<<this<<endl;
//		cout<<"Complex delloc this "<<endl;
	}
	Complex& operator+(const Complex& c);
	Complex& operator++();		//前置++
	Complex operator++(int a); // 后置++
//	Complex* operator-(const Complex* c);
	
	
	int getA();
	int getB();
	void printComplex();
};

class moreComplex {
	private :
	Complex A;
	int c;
public:
	moreComplex(int a,int b,int c);
	void showInfo();
};


#endif /* Complex_hpp */
