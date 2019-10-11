//
//  middleTest.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/9.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "middleTest.hpp"
#include "iostream"

using namespace std;


int GetString(const char *str1 /*in*/, char *str2 /*in*/)
{
	int ret = 0;
	char *p1 = NULL, *p2 = NULL;
	int len = 0, i = 0;
	
	if (str1 == NULL || str2==NULL )
	{
		ret = -1;
		return ret;
	}
	
	
	len = strlen(str1);
	
	//
	strcpy(str2, str1);
	
	//初始化循环环境
	p1 = str2 +1 ;
	p2 = str2;
	for (i=0; i<len && (*p1!= NULL) ; i++)
	{
		if  (isalpha(*p1) && isspace(*p2))
		{
			*p1 = *p1 - 32;
		}
//		cout<<*p1<<endl;
		
		//打造循环条件
		p2 = p1;
		p1 ++;
	}
	
	return ret;
}

int GetString_1(const char *str1 /*in*/, char *str2 /*in*/) {
	
	long length = strlen(str1);
	strcpy(str2,str1);
	
	char* p0 = str2;
	char* p1 = p0 + 1;
	
	for(int i = 0 ;i < length ; i++ )
	{
		if  (isalpha(*p1) && isspace(*p0))
		{
			//			cout<< "p1 !=0   " << (int)*p1<< endl;
			char np = (char)*p1-32;
			
			*p1 = np;
		}
		p0++;
		p1++;
	}
	return 0;
}

int GetString_Adv(const char *str1/*in*/, char **str2_2 /*out*/) {
	long length = strlen(str1);
	char* str2 = (char*)malloc(sizeof(char)* length + 1);
	strcpy(str2,str1);
	
	char* p0 = str2;
	char* p1 = p0 + 1;
	
	for(int i = 0 ;i < length ; i++ )
	{
		if  (isalpha(*p1) && isspace(*p0))
		{
			//			cout<< "p1 !=0   " << (int)*p1<< endl;
			char np = (char)*p1-32;
			
			*p1 = np;
		}
		p0++;
		p1++;
	}
	
	*str2_2 = str2;
	
	return 0;
}


void getName() {
	cout<<"getName"<<endl;
	char* name = "   i am ";
	int len = strlen(name);
	cout<<"name = "<< name << endl;
	char namecopy[100] = {0};
	
	strcpy(namecopy,name);
	
	
	cout<<"namecopy = "<< namecopy << endl;
	
	
	
	
//	char* head = namecopy;
//	*(head + 10 )= 'A';
//	cout<<"namecopy = "<< namecopy << endl;
//	return;
	char* p0 = namecopy;
	char* p1 = p0 + 1;
	for (int i = 0; i <  (len - 1) && *p0 != 0; i++) {
		
//	}
//	while (*p0 != 0) {
//		cout << *p0 << "" << *p1 <<endl;
		p0 ++;
		p1 ++;
//		if (*p0 == ' '  && *p1 != ' ' && *p1 !=0)
		if  (isalpha(*p1) && isspace(*p0))
		{
			cout<< "p1 !=0   " << (int)*p1<< endl;
			char np = (char)*p1-32;
			
			*p1 = np;
		}
	}
	cout<<"name = "<< namecopy << endl;
}


int GetString_Adv_Free1(char *str2) {
	
	return 0;
}
int GetString_Adv_Free2(char **str2) {
	char* temp = *str2;
	if (temp != NULL) {
		free(temp);
		temp = NULL;
		str2 = NULL;
	}
	return 0;
}


//int main() {
//	cout<<"main"<<endl;
//	const char *str1_1 = "     i am student, you are teacher   ";
//	char str2_1[100] = {0};
//	GetString_1(str1_1 /*in*/, str2_1 /*in*/);
//	cout << "GetString_1 = " << str2_1 <<endl;
//	
//	char* str2_2;
//	char** str2_22 = &str2_2;
////	GetString_Adv(str1_1 , str2_22);
//	GetString_Adv(str1_1 , &str2_2);
//	cout << "GetString_2 = " << str2_2 <<endl;
//	
//	GetString_Adv_Free2(&str2_2);
////	str2_2 = "abcd";
//	cout << "GetString_2 = " << str2_2 <<endl;
//	return 0;
//	
//	const char *str1 = "     i am student, you are teacher   ";
//	char buf[1024] = {0};
//	int ret = 0;
//	ret = GetString(str1 /*in*/, buf /*in*/);
//	if (ret != 0)
//	{
//		printf("func GetString() err:%d \n", ret);
//		return ret;
//	}
//	printf("buf:%s \n", buf);
//	
////	point* p = new point(1,2);
////	cout<<p->getX()<<endl;
////	cout<<p->getY()<<endl;
////
////	point p2 = {3,4};
////
////	cout<<p2.getX()<<endl;
////	cout<<p2.getY()<<endl;
////
////
////	circle* a = new circle(10,p);
////	circle* b = new circle(10,p);
////	bool inter = a->intersex(b);
////	cout<< "inter = "<< inter<< endl;
//
////	bool inter2 = a&b;
////	cout<< "inter2 = "<< inter2<< endl;
//	return 0;
//}
