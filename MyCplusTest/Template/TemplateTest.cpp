//
//  TemplateTest.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/12/10.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include <iostream>
#include "TemplateTest.hpp"

using namespace std;




template <typename T>
void swapT(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void swap(int& a, int &b)
{
	int c = a;
	a = b;
	b = c;
}


void printArray(int *a ,int count)
{
	for (int i=0; i < count; i++) {
		cout << "a = " << a[i] << " index = "<< i << endl;
	}
}
template <typename ARRAY>
void  printArrayTemp(ARRAY* array,int count ) {
	for (int i=0; i < count; i++) {
		cout << "a = " << array[i] << " index = "<< i << endl;
	}
}



int main()
{
	cout<<"main"<<endl;
	

	int a = 2;
	int b = 3;
	cout << "a = " << a << " b = "<< b << endl;
	swapT(a,b);
	cout << "a = " << a << " b = "<< b << endl;
	
	
	float d = 3.1;
	float e = 4.1;
	cout << "d = " << d << " e = "<< e << endl;
	swapT(d,e);
	cout << "d = " << d << " e = "<< e << endl;
	
	
	MyTemplate<int> tp;
	tp.type = 5;
	int type =tp.getType();
	
	cout << "type = " << type << endl;
	
	int array_a[3] = { 1 , 2 , 3};
	printArray(array_a , 3);
	
	cout << "printArrayTemp "  << endl;
	printArrayTemp(array_a , 3);
	
	return 0;
}
