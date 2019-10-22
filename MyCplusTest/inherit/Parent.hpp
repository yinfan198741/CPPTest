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

class Parent : public Object{
	
	
public:
	Parent(char* name);
	char* parentName;
	virtual ~Parent();
};

#endif /* Parent_hpp */
