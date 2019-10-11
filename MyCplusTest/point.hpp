//
//  point.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/8.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef point_hpp
#define point_hpp

#include <stdio.h>

class point {
	
	
public:
	point(int x,int y);
	int getX();
	int getY();
private:
	int x;
	int y;
};

#endif /* point_hpp */
