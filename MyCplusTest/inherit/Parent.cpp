//
//  Parent.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Parent.hpp"
#include <iostream>
using namespace std;

Parent::Parent(char* name):Object(100)
{
	this->parentName = name;
}

Parent::~Parent()
{
	cout<<"~Parent"<<endl;
}
