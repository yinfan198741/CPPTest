//
//  Object.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Object.hpp"
#include <iostream>
using namespace std;

Object::Object (int age)
{
	this->object_age = age;
}

Object::~Object()
{
	cout<<"~Object"<<endl;
}
