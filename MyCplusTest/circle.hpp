//
//  circle.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/8.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef circle_hpp
#define circle_hpp

#include "point.hpp"
#include <stdio.h>

class circle {
	
public:
	circle(int radius, point* p);
	int radius;
	point* center;
	bool intersex(circle* otherCircle);
//	bool operator&(circle* otherCircle);
};

#endif /* circle_hpp */
