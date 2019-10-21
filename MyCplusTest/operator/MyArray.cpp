//
//  MyArray.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/20.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "MyArray.hpp"
#include <iostream>
using namespace std;

int main() {
	
	cout<< "main array" << endl;
//	int *p = new int[3];//{1,2,3};
//	MYArray a = {p , 3};
	MYArray a = {3};
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	
	cout<< a <<"ABC"<<endl;
	
	
	MYArray b = a;
	cout<< b ;
	
	
	MYArray c = {5};
	c = b;
	
//	MYArray p5 = a;
//	cout<<"p51 = "<< p5 ;
//
//	int p2[] = {1,2,4};
//	MYArray a2 = {p2 , 3};
//
//	p5 = a2;
//	cout<<"p52 = "<< p5 ;
//
//	*(p5[1]) = 5;
//	cout<<"p53 = "<< p5 ;
	
	//	cout<<p4.getLength()<<endl;
	
	
	//
	//	int p1[] = {1,2,3};
	//	MYArray a1 = {p1 , 3};
	//
	//	int p2[] = {1,2,4};
	//	MYArray a2 = {p2 , 3};
	//
	//
	//	MYArray p4 = a2;
	//	cout<<p4.getLength()<<endl;
	
	//	bool e = a == a2;
	//	cout<< "a == a2 = " << (e == 1 ? "YES" : "NO") << endl;
	//	bool e1 = a != a2;
	//	cout<< "a != a2 = " << (e1 == 1 ? "YES" : "NO") << endl;
	
	
}
int *MYArray::getHead()
{
	return this->p;
}
MYArray::MYArray() {
	this->p = NULL;
	this->length = 0;
}


MYArray::MYArray( int length){
//	this->p = p;
	this->length = length;
	int * p = new int[this->length];
	this->p = p;
}

MYArray::~MYArray()
{
//	delete (p) ;
//	this->length = 0;
	length = -1;
	delete[] p;
	cout<<"~MYArray"<<endl;
}

MYArray::MYArray(const MYArray& array) {
	///初始化不用这个
	
//	if (this->p != NULL) {
//		delete this->p;
//		this->p = NULL;
//		this->length = 0;
//	}
	
	int *pp = new int[array.length];
	memset(pp, 0, sizeof(int)*array.length);
	memcpy(pp, array.p, sizeof(int)*array.length);
	this->p = pp;
	this->length = array.length;
	
}
void MYArray::operator=(MYArray& array)
{
	if (this->p != NULL) {
		delete this->p;
		this->p = NULL;
		this->length = 0;
	}
	int *pp = new int[array.length];
	memset(pp, 0, sizeof(int)*array.length);
	memcpy(pp, array.p, sizeof(int)*array.length);
	this->p = pp;
	this->length = array.length;
}


bool MYArray::operator==(MYArray& array)
{
	if (array.length != this->length) {
		return false;
	}
	int length = array.length;
	int * p1 = this->p;
	int *p2 = array.p;
	
	for ( int i = 0; i < length ; i ++ ) {
		if(*(p1+i) != *(p2 + i))
		{
			return false;
		}
		cout<< "idx = " << i << endl;
	}
	
	return true;
}


bool MYArray::operator!=(MYArray& array)
{
	return !(*this==array);
}


int MYArray::getLength()
{
	return this->length;
}

int& MYArray::operator[](int idx)
{
	int *p = this->p+idx;
	return *p;
//	return MYArray
}

ostream& operator<<(ostream& os, MYArray& a)
{
	os<<"a.length = " <<  a.length<< endl;
	for (int i = 0  ; i < a.length ; i++)
	{
		os<<"a.p  = " <<  *(a.p+i) << endl;
	}
	return os;
}


