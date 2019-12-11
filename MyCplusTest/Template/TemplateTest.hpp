//
//  TemplateTest.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/12/10.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef TemplateTest_hpp
#define TemplateTest_hpp

#include <stdio.h>

template <class CT>
class  MyTemplate {
public:
	CT type;
	CT getType()
	{
		return type;
	}
	
};


#endif /* TemplateTest_hpp */
