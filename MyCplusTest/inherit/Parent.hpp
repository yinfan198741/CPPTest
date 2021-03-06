//
//  Parent.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef Parent_hpp
#define Parent_hpp

#include <stdio.h>
#include "Object.hpp"

class Parent : virtual public Object{
	
	
public:
	Parent(char* name);
	char* parentName;
	
	char* getName();
	
	virtual ~Parent();
};

#endif /* Parent_hpp */
