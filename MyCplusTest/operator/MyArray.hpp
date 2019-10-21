//
//  MyArray.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/20.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef MyArray_hpp
#define MyArray_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class MYArray {
	
private:
	int *p;
	int length;
	
public:
	
	friend ostream& operator<<(ostream& os, MYArray& a); ///返回ostream 链式调用
	
	MYArray();
	~MYArray();
	MYArray(int length);
	MYArray(const MYArray& array);
	void operator=(MYArray& array);
	bool operator==(MYArray& array);
	bool operator!=(MYArray& array);
	int& operator[](int idx);
	int getLength();
	int *getHead();
	
	
};

#endif /* MyArray_hpp */
