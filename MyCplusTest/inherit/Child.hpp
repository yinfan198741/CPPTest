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
#include "Toy.hpp"
#include "Car.hpp"


#include <stdio.h>

class Child: public ParentTwo , public Parent {
	
private:
	Car c;
	Toy t;
public:
	Child(char* cname, char * tname);
	char* childName;
	void printInfo();
	~Child();
};

#endif /* Child_hpp */
