//
//  ParentTwo.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "ParentTwo.hpp"
#include <iostream>
using namespace std;


ParentTwo::ParentTwo (char * name): Object(200)
{
	this->parentTwoName = name;
}


ParentTwo::~ParentTwo()
{
	cout<<"~ParentTwo"<<endl;
}
