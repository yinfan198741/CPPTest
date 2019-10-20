//
//  lkTest.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/19.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef lkTest_hpp
#define lkTest_hpp

#include <stdio.h>

typedef struct _LinkList
{
	int data;
	struct _LinkList*next;
} LinkList;

class  linkTest {
private:
	LinkList* linkHead;
public:
	void createLink(int* p,int length);
	void printLink();
	void deleteLinkOdds();
	
};

#endif /* lkTest_hpp */
