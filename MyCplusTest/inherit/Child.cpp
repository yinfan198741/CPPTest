//
//  Child.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Child.hpp"
#include "Object.hpp"
#include <iostream>

using namespace std;

int main()
{
	cout<< "main" << endl;
	Child* c = new Child("cname","tname");
	int age = c->object_age;
	cout<<"age = "<<age<<endl;
	delete c;
//	int age = c->object_age;
//	c->childName = "abc";
//	c->printInfo();
	
	
	ParentTwo* pt = new ParentTwo("abc");
	int age2 = pt->object_age;
	cout<<"age2 = "<<age2<<endl;
	delete pt;
	
	return 0;
}

Child::Child(char* cname, char * tname): c(cname), t(tname), Parent("123"),ParentTwo("456"),Object(123)
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

Child::~Child()
{
	cout<<"~Child"<<endl;
}
