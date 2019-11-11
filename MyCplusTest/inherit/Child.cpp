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
	
	char* getName = c->getName();
	cout<<"父亲,祖父都有的方法结果 = "<<getName<<endl;
	
	char* getName1 =c->Object::getName();
//	char* getName = c::->getName();
	cout<<"父亲,祖父都有的方法结果 = "<<getName1<<endl;
	
//	delete c;
//	int age = c->object_age;
	c->childName = "abc";
	c->printInfo();
	delete c;
	
	ParentTwo* pt = new ParentTwo("abc");
	int age2 = pt->object_age;
	cout<<"age2 = "<<age2<<endl;
	delete pt;
	
	return 0;
}

Child::Child(char* cname, char * tname): c(cname), t(tname), Parent("123"),ParentTwo("456"),Object(123)
{
	cout<<"二义性继承-》 child 继承 ParentTwo 、Parent ,两个双亲同时继承与Object ,然后Object 里面的变量怎么办?"<<endl;
	cout<<"child 包含一个 car 一个 toy"<<endl;
	cout<<"父亲虚拟继承、导致孩子必须自己去初始化祖父节点"<<endl;
	cout<<"虚兮构函数,为了兮构整个链条"<<endl;
//	this->printInfo();
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
