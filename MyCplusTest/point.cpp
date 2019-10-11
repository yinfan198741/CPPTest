//
//  point.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/8.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "point.hpp"


point::point(int x,int y)
{
	this->x = x;
	this->y = y;
}

int point::getX()
{
	return this->x;
}

int point::getY()
{
	return this->y;
}
