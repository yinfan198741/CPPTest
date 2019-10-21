//
//  Child.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Child.hpp"
#include <iostream>

using namespace std;

int main()
{
	cout<< "main" << endl;
	Child* c = new Child();
	c->childName = "abc";
	c->printInfo();
	delete c;
	return 0;
}

Child::Child():Parent("123"),ParentTwo("456")
{
	
}

void Child::printInfo()
{
	cout<<"this->childName  = "<< this->childName<<endl;
	cout<<"this->parentTwoName = "<< this->parentTwoName<<endl;
	cout<<"this->parentName = "<< this->parentName<<endl;
	cout<<"this->Parent::object_age = "   << this->Parent::object_age<<endl;
	cout<<"this->parentTwo::object_age = "<< this->ParentTwo::object_age<<endl;
	
//	this->childName;
//	this->parentTwoName;
//	this->parentName;
//	this->object_age;
}
