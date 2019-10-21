//
//  Child.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef Child_hpp
#define Child_hpp
#include "ParentTwo.hpp"
#include "Parent.hpp"

#include <stdio.h>

class Child: public ParentTwo , public Parent {
	
	
public:
	Child();
	char* childName;
	void printInfo();
};

#endif /* Child_hpp */
