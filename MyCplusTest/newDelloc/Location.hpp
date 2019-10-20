//
//  Location.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/19.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef Location_hpp
#define Location_hpp

#include <iostream>
#include <stdio.h>

using namespace std;


class location {

private:
	int x;
	int y;
	
public:
	static int c;
	location();
	location(int x);
	location(int x,int y);
	location(const location &l);
	void printLocationInfo();
	
	location getLocaltion();
	void operator=(const location &l);
	
	~location(){
		location *p = this;
		cout<< "delloc call p = "<<p<<endl;
	}
	int getX(){
		return this->x;
	}
	int getY() {
		return this->y;
	}
	
	static void printLocationInfo(location l);

};

int location::c = 1;

class triangle {

public:
	triangle(int x1,int y1, int x2, int y2, int x3 , int y3)
	: locationA(x1 , y1),locationB(x2 , y2),locationC(x3 , y3), a(10){
		
	}
	
	triangle(const triangle& t): a(t.a+100)
	{
		this->locationA = t.locationA;
		this->locationC = t.locationC;
		this->locationB = t.locationB;
//		this->a = t.a;
		
	}
	location locationA;
	location locationC;
	location locationB;
	const int a ;
	void printTriangleInfo();
};

#endif /* Location_hpp */
