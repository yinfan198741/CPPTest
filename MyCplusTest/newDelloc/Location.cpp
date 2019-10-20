//
//  Location.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/19.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Location.hpp"

void printLocationInfo(location l) {
	cout<<"printLocationInfo 拷贝"<<endl;
	cout<<" l.x = "<<l.getX() <<" l.x = "<< l.getY()<<"static c = "<< location::c<<endl;
}

location g()
{
	location A(1, 2);
	return A;
}

void objecPlay1()
{
//	cout<<"1"<<endl;
//	location ll;
//	ll = g();
//	cout<<"2"<<endl;
//
//	location B = g();
//	cout<<"3"<<endl;
	
//	location ll(1,2);
//	location l2 = ll;
//	l2.printLocationInfo();
	location l3(3,4);
	location l4;
	cout<<"l4 = l3"<<endl;
	l4 = l3;
//	l4.printLocationInfo();
	
	printLocationInfo(l3);
}

void objecPlay2()
{
	cout<<"objecPlay2"<<endl;
	triangle t(1,2,3,4,5,6);
	t.printTriangleInfo();
	
	triangle c = t;
	cout<<"c==== "<<endl;
	c.printTriangleInfo();
}

//int main ()
//{
//	cout<< "abc"<<endl;

//	location* ll = new location();
//	delete ll;
//
	
//	location ll;
//	ll.printLocationInfo();
//
//	location* l2 = new location(2,3);
//	l2->printLocationInfo();
//
//	location l3 = l2->getLocaltion();
//	l3.printLocationInfo();
//
//	delete l2;
//	objecPlay1();
//	objecPlay2();
//	return 0;
//}



location::location() {
	cout<<"无参构造"<<endl;
	this->x = 0;
	this->y = 0;
}

location::location(int x) {
	cout<<"有参构造"<<endl;
	this->x = x;
//	this->y = y;
	
}

location::location(int x,int y) {
	cout<<"有参构造"<<endl;
	this->x = x;
	this->y = y;
}

location::location(const location &l) {
	cout<<"拷贝构造"<<endl;
	this->x = l.x + 2;
	this->y = l.y + 3;
}


void location::operator=(const location &l)
{
	cout<<"符号重载"<<endl;
	this->x = l.x + 6;
	this->y = l.y + 6;
}


location location::getLocaltion() {
	return *this;
}



void location::printLocationInfo() {
	cout<<"printLocationInfo"<<endl;
	cout<<" x = "<<x <<" y = "<< y<<endl;
}




void triangle::printTriangleInfo()
{
	cout<<"this.locationA.x = "<<this->locationA.getX() << endl;
	cout<<"this.locationA.y = "<<this->locationA.getY() << endl;
	
	cout<<"this.locationB.x = "<<this->locationB.getX() << endl;
	cout<<"this.locationB.y = "<<this->locationB.getY() << endl;
	
	cout<<"this.locationC.x = "<<this->locationC.getX() << endl;
	cout<<"this.locationC.y = "<<this->locationC.getY() << endl;
}
