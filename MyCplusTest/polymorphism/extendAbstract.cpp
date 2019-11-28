//
//  extendAbstract.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/11/28.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "extendAbstract.hpp"
#include "abstractInterfaceB.cpp"
#include "abstractInterface.cpp"


class extendText : public interfaceB, public interfaceA{
	
	
public:
	int add(int x, int y)
	{
		return x + y;
	}
	int min(int x, int y)
	{
		return x - y;
	}
};
