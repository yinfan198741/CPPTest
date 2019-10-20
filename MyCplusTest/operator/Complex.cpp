//
//  Complex.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/20.
//  Copyright © 2019 fanyin. All rights reserved.
//


//全局函数方法去实现操作符重载
//1 承认操作符重载是一个函数
//2 根据操作数，1个操作数 2个操作数，完成函数的参数
//3 根据函数原型，实现需要业务
//Complex c31 = operator+(c1, c2);
//Complex c3 = c1 + c2;

//用类成员函数实现-运算符重载
//Complex c4 = c1 - c2;


#include "Complex.hpp"
#include "iostream"
using namespace std;

int main()
{
	cout<<"main"<<endl;
//	Complex A = {1 , 2};
	
	Complex* A = new Complex(1,2);
	A->printComplex();
	
	Complex* B = new Complex(1,2);
	B->printComplex();

	*A = operator+(*A , *B);
	A->printComplex();
	*A = *A+*B;
	A->printComplex();

	
	
//	A++;
//	operator++(A);
	
//	*A = operator++(*A);
	cout<<"operator++ "<<endl;
	A->printComplex();
	
	cout<<"++(*A) "<<endl;
	++(*A);
	A->printComplex();
	
	
	cout<<"(*A)++ 1"<<endl;
	Complex D = (*A).operator++();
	cout<<D<<endl;
	Complex C = (*A)++;
	C.printComplex();
	cout<<"(*A)++ 2"<<endl;
	A->printComplex();
	cout<< *A <<" Info over " <<endl;
	
	
	staticFriendCallPrivate(A);
	
	delete (A);
	delete (B);
	
	return 0;
}

Complex::Complex(int a,int b)
{
	cout<<"构造函数"<<endl;
	this->a = a;
	this->b = b;
}

Complex::Complex(const Complex& c)
{
	cout<<"拷贝构造函数"<<endl;
	this->a = c.a;
	this->b = c.b;
}

int Complex::getA()
{
	return this->a;
}

int Complex::getB()
{
	return this->b;
}

void Complex::printComplex()
{
	cout<< "complex Info A = "<< this->getA()<<" B = " <<this->getB() <<" point info = "<< this <<endl;
}


Complex& Complex::operator+(const Complex& c)
{
	this->a += c.a;
	this->b += c.b;
	return *this;
}

Complex operator+(Complex& A , Complex& B)
{
	Complex temp = Complex(A.getA() + B.getA() ,A.getB() + B.getB() );
	return temp;
}
Complex& Complex::operator++()
{
	this->a++;
	this->b++;
	return *this;
}

///后置++返回冲在函数
Complex Complex::operator++(int a)
{
	Complex temp = {this->a,this->b};
	this->a++;
	this->b++;
	return temp;
}
//
//Complex& operator++(Complex& A)
//{
//	this->a++;
//	this->b++;
//	return A;
//}
//
//Complex operator++(Complex& A,int a)
//{
//	Complex temp = A;
//	this->a++;
//	this->b++;
//	return temp;
//}


ostream& operator<<(ostream& os, Complex& b)
{
	os<<"重写输出方法<<"<<" A = "<< b.a << " B = "<< b.b <<endl;
	return os;
}


void staticFriendCallPrivate( Complex* &b)
{
	cout<<"友元函数可以访问私有变量<<"<<" A = "<< b->a << " B = "<< b->b <<endl;
}



moreComplex::moreComplex(int a,int b,int c):A(b,c) {
	this->c = a;
}

void moreComplex::showInfo() {
	int a = this->A.a;
	cout<< a <<endl;
}
