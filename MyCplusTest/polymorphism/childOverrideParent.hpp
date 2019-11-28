//
//  childOverrideParent.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/11/14.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef childOverrideParent_hpp
#define childOverrideParent_hpp

#include <stdio.h>


class parent {

public:
	void callTow();
};

class child : public parent {
	
	
public:
	void callTow(int x,int y);
};




#endif /* childOverrideParent_hpp */
