//
//  DeleteChar.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/19.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "DeleteChar.hpp"
#include <iostream>

using namespace std;

//int main ()
//{
//	cout<< "main"<< endl;
//	deleteChar* dc = new deleteChar();
//	dc->inputChars = "123456789";
//	cout<<"dc->inputChars" << dc->inputChars << endl;
//	dc->deleteCharAt(2);
////	cout<<"dc->inputChars" <<endl;
//	cout<<"dc->inputChars" << dc->inputChars << endl;
//	dc->deleteCharAt(3);
//	cout<<"dc->inputChars" << dc->inputChars << endl;
//	dc->deleteCharAt(4);
//	cout<<"dc->inputChars" << dc->inputChars << endl;
//}


void deleteChar::deleteCharAt(int idx) {
	
	int length = strlen(this->inputChars);
	
	char* newchar = (char*)malloc(sizeof(char*)* (length + 1));
	memset(newchar, 0, sizeof(char*)* length);
	char* head = inputChars;
	int loopIdx = 0;
	int cpyedIdx = 0;
	while (*head != 0) {
		if (idx == loopIdx) {
			loopIdx++;
			head++;
			continue;
		}
		
//		cout<<"*head = " << *head <<endl;
		*(newchar + cpyedIdx) = *head;
		cpyedIdx++;
		loopIdx++;
		head++;
	}
//	char* newchar = (char*)malloc(sizeof(char*)* length);
//	cout<< "new char = " << newchar << endl;
	this->inputChars = newchar;
}


