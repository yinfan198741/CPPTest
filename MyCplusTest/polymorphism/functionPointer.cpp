//
//  functionPointer.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/11/13.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "functionPointer.hpp"
#include <iostream>

using namespace std;

typedef void (*funcp)(int);

void funcA(int a)
{
	cout<<"a = "<< a <<endl;
}


void funcB(funcp fp)
{
	fp(20);
}

int mainPPPP()
{
	cout<<"functionPointer"<<endl;
	
	int a[10];
	
	for (int i = 0 ; i < 10 ; i ++) {
		a[i] = i;
	}
	
//	for (int i = 0; i < 10; i ++) {
//		cout<< "a[i] = " << a[i]<< endl;
//	}
	

	{
		typedef int(*ap)[10] ;
		ap _app = NULL;
		_app = &a;
		cout<< "ap = " << (*_app)[2]<< endl;
	}
	
	{
		funcA(5);
		
		funcp p = &funcA;
		p(10);
		
		funcB(p);
	}

	
	return 0;
}


