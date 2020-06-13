//
//  lee167.cpp
//  MyCplusTest
//
//  Created by fanyin on 2020/6/13.
//  Copyright © 2020 fanyin. All rights reserved.
//

#include "lee167.hpp"
#include <iostream>
#include <vector>

using namespace::std;

std::vector<int> twoSum(std::vector<int>& numbers, int target) {

	int first = -1;
	int second = -1;
	for(int i = 0 ; i < numbers.size(); i ++)
	{
		int v = numbers[i];
		
		int res = target - v;
		first = i;
		for (int j = i + 1 ; j < numbers.size(); j++)
		{
			if(numbers[j] == res)
			{
				second = j;
				break;
			}
		}
		if (second > -1)
		{
			break;
		}
	}
	std::vector<int> * pp = new std::vector<int>();
	pp->push_back(first +1);
	pp->push_back(second +1);
	return *pp;

}


std::vector<int> twoSum2(std::vector<int>& numbers, int target) {


	
	int low = 0;
	int height = (int) numbers.size();
//	cout<< "height =" << height <<endl;
	while (low < height) {
		
		if (numbers[low] + numbers[height] > target) {
			height -- ;
//			cout<< "height --"  <<endl;
		}
		
		else if (numbers[low] + numbers[height] < target) {
			low ++ ;
//			cout<< "low ++"  <<endl;
		}
		
		else if (numbers[low] + numbers[height] == target) {
			break;
		}
	}
	
	
	std::vector<int> * pp = new std::vector<int>();
	pp->push_back(low +1);
	pp->push_back(height +1);
	return *pp;

}


int main ()
{
	std::vector<int> input = {2,7,11,15};
	std::vector<int> output = twoSum2(input,9);
	
	std::cout<< output[0]<<std::endl;
	std::cout<< output[1]<<std::endl;
	
	
	printf("hello world\n");
	return 0;
}
