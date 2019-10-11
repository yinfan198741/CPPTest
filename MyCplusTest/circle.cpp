//
//  circle.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/8.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "circle.hpp"
#include "point.hpp"
#include "iostream"

using namespace std;

//int main() {
//	cout<<"circle.cpp"<<endl;
//
//	point* p = new point(1,2);
//	cout<<p->getX()<<endl;
//	cout<<p->getY()<<endl;
//
//	point p2 = {3,4};
//	
//	cout<<p2.getX()<<endl;
//	cout<<p2.getY()<<endl;
//
//
//	circle* a = new circle(10,p);
//	circle* b = new circle(10,p);
//	bool inter = a->intersex(b);
//	cout<< "inter = "<< inter<< endl;
//
////	bool inter2 = a&b;
////	cout<< "inter2 = "<< inter2<< endl;
//	return 0;
//}


circle::circle(int radius, point* p) {
	this->radius = radius;
	this->center = p;
}

bool circle::intersex(circle* otherCircle) {
//	int disX = this->center->getX() - otherCircle->center->getX();
//	int disY = this->center->getY() - otherCircle->center->getY();
//	int dis = disX * disX + disY * disY;
	return true;
}
//bool circle::operator&(circle* otherCircle)
//{
//	return true;
//}
