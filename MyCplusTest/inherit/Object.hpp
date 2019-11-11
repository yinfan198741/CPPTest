//
//  Object.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef Object_hpp
#define Object_hpp

#include <stdio.h>

class Object {
	
public:
	Object(int age);
	int object_age;
	char* getName();
	virtual	~Object();
};

#endif /* Object_hpp */
