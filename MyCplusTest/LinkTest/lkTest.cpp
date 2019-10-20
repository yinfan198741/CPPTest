//
//  lkTest.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/19.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "lkTest.hpp"
#include <iostream>

using namespace std;

//int main(void) {
//	cout<< "linkTest"<<endl;
//	linkTest* lt = new linkTest();
//	int p[10] = {1,2,3,4,5,6,7,8,9,10};
//	lt->createLink(p, 10);
//	lt->printLink();
//	lt->deleteLinkOdds();
//	
//}

void linkTest::createLink(int *p, int length) {
	
	
//	LinkList* linkHead;
//	LinkList* link =
	LinkList* ll = (LinkList*)malloc(sizeof(LinkList)* length);
	memset(ll, 0, sizeof(LinkList)* length);
	this->linkHead = ll;
	int * header = p;
	
	for (int i = 0 ; i < length; i ++) {
		int data = *(header + i);
		LinkList* current =	(this->linkHead + i);
		current->data = data;
		int nextIdx = (i+ 1);
		if (nextIdx < length) {
			LinkList* next = (this->linkHead + nextIdx);
			current->next = next;
		}
	}
}

void linkTest::printLink() {
	LinkList* ll = this->linkHead;
	while (ll != NULL) {
		cout<< "linkData = " << ll->data<< endl;
		ll = ll->next;
	}
}


void linkTest::deleteLinkOdds() {
	LinkList* ll = this->linkHead;
	int idx = 0;
	while (ll != NULL) {
		cout<< "linkData = " << ll->data<< endl;
		ll = ll->next;
		idx++;
	}
}
