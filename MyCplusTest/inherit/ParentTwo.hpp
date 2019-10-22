//
//  ParentTwo.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef ParentTwo_hpp
#define ParentTwo_hpp

#include <stdio.h>
#include "Object.hpp"

class ParentTwo : public Object{
	
public:
	ParentTwo(char* name);
	char* parentTwoName;
	virtual ~ParentTwo();
};

#endif /* ParentTwo_hpp */
