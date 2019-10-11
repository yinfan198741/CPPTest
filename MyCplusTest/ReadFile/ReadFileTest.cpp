//
//  ReadFileTest.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/11.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "ReadFileTest.hpp"
#include <iostream>
using namespace std;
int main() {
	cout<<"main"<<endl;
	FileInfoReader reader;
	
	reader.testFree();
	
//	char* filePath = "/Users/fanyin/Desktop/CFRunLoop.c";
//	int lineCount = 0;
//	char** fileContent = reader.readFile(filePath,&lineCount);
//	cout<<"lineCount"<<lineCount<<endl;
//	char** header = fileContent;
//	int idx = 0;
//	while (header[idx] != 0) {
//		cout<<"*header = " << header[idx] <<endl;
//		idx++;
//	}
//
//	while (*header != 0) {
//		cout<<"*header = " << *header <<endl;
//		header++;
//	}
//	reader.freePointer(header);

}


void FileInfoReader::testFree() {
	char** a =(char**) malloc(sizeof(char*)* 100);
	memset(a, 0, 100);
	char* p = *a;
	char* p1 = *(a+1);
	p = "123";
	p1 = "456";
	*a = p;
	*(a+1) = p1;
	cout<<"p = " << p<< endl;
	cout<<"p1 = " << p1<< endl;
	int idx = 0;
	while (a[idx] !=0) {
		cout<<"aaaa = "<< a[idx]<<endl;
		idx++;
	}
	while (a[idx] !=0) {
//		cout<<"aaaa = "<< a[idx]<<endl;
//		idx++;
		free(a[idx]);
	}
	
	
	free(a);
	
}

void FileInfoReader::freePointer(char** header)
{
	char** temp = header;
	int idx = 0;
	while (temp[idx] != 0) {
		free(temp[idx]);
		temp[idx] = NULL;
		idx++;
	}
//	free(temp);
}


char** FileInfoReader::readFile(char* filePath,int * lineCount) {
	int lines = 1024;
	
	char** contentPointer = (char** )malloc(sizeof(char*)* lines);
	memset(contentPointer, 0, lines);
	
	char** cp = contentPointer;
	FILE* fp = fopen(filePath, "r");
	if (fp ==NULL) {
		return NULL;
	}
	int idx = 0;
	while (!feof(fp)) {
		int size = 1024;
		char* line = (char* )malloc(sizeof(char)* size);
		memset(line, 0, 1024);
		fgets(line, size, fp);
		cout<<"line = "<< line <<endl;
//		*cp = line;
//		cp++;
		contentPointer[idx] = line;
		idx++;
	}
	*lineCount = idx;
	
	
	
	return contentPointer;
}
