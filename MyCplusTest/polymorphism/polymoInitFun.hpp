//
//  polymoInitFun.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/11/14.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef polymoInitFun_hpp
#define polymoInitFun_hpp

#include <stdio.h>

#include <iostream>
using namespace std;

class pl {
public:
	pl();
	
	virtual void printfunc();
	
	virtual ~pl();
};

class cl :public pl {
	
public:
	cl();
	
	void printfunc();
	~cl();
};

#endif /* polymoInitFun_hpp */
