//
//  lee53.cpp
//  MyCplusTest
//
//  Created by fanyin on 2020/6/14.
//  Copyright © 2020 fanyin. All rights reserved.
//

#include "lee53.hpp"
#include <iostream>
#include <vector>
#include <map>
using namespace::std;



//int max3(int a, int b, int c)           // 求三个数的最大值
//{
//    int max = a;
//    if (b > max)
//        max = b;
//    if (c > max)
//        max = c;
//    return max;
//}
//
//
//
//int MaxSubsequenceSum(const int array[], int left, int right)
//{
//    if (left == right)          // 设置基准，即递归终止条件
//        return array[left];
//
//    int middle = (left + right) / 2;
//
//    int leftMaxSubsequenceSum = MaxSubsequenceSum(array, left, middle);     // 求左半部分最大子序列和
//    int rightMaxSubsquenceSum = MaxSubsequenceSum(array, middle + 1, right);    // 求右半部分最大子序列和
//
//    // 处理左右边界问题：最大子序列跨越中间，包含左半部分最右一个数，同时包含右半部分最左一个数
//    int maxLeftBorderSum = 0;
//    int maxRightBorderSum = 0;
//    int tempSum = 0;        // 临时求和变量
//    for (int i = middle;i >= left;i--)
//    {
//        tempSum += array[i];
//        if (tempSum > maxLeftBorderSum)
//            maxLeftBorderSum = tempSum;     // 左边包含边界最大序列和
//    }
//    tempSum = 0;
//    for (int i = middle + 1;i < right;i++)
//    {
//        tempSum += array[i];
//        if (tempSum > maxRightBorderSum)
//            maxRightBorderSum = tempSum;    // 右边包含边界最大序列和
//    }
//
//    int maxBorderSum = maxRightBorderSum + maxLeftBorderSum;        // 最大边界子序列和等于两部分边界之和
//    return max3(leftMaxSubsequenceSum, maxBorderSum, rightMaxSubsquenceSum);         // 返回三个部分的最大子序列和
//}


//  int maxSubArray(int* nums) {
//        return maxSubArrayDivideWithBorder(nums, 0, nums.length-1);
//    }
//
//     int maxSubArrayDivideWithBorder(int* nums, int start, int end) {
//        if (start == end) {
//            // 只有一个元素，也就是递归的结束情况
//            return nums[start];
//        }
//
//        // 计算中间值
//        int center = (start + end) / 2;
//        int leftMax = maxSubArrayDivideWithBorder(nums, start, center); // 计算左侧子序列最大值
//        int rightMax = maxSubArrayDivideWithBorder(nums, center + 1, end); // 计算右侧子序列最大值
//
//        // 下面计算横跨两个子序列的最大值
//
//        // 计算包含左侧子序列最后一个元素的子序列最大值
//        int leftCrossMax = Integer.MIN_VALUE; // 初始化一个值
//        int leftCrossSum = 0;
//        for (int i = center ; i >= start ; i --) {
//            leftCrossSum += nums[i];
//            leftCrossMax = Math.max(leftCrossSum, leftCrossMax);
//        }
//
//        // 计算包含右侧子序列最后一个元素的子序列最大值
//        int rightCrossMax = nums[center+1];
//        int rightCrossSum = 0;
//        for (int i = center + 1; i <= end ; i ++) {
//            rightCrossSum += nums[i];
//            rightCrossMax = Math.max(rightCrossSum, rightCrossMax);
//        }
//
//        // 计算跨中心的子序列的最大值
//        int crossMax = leftCrossMax + rightCrossMax;
//
//        // 比较三者，返回最大值
//        return Math.max(crossMax, Math.max(leftMax, rightMax));
//    }


int findRepeatNumber(vector<int>& nums) {
	int repetKey = 0;
	map<int, int> mapNumber;
	for (int i = 0; i  < nums.size(); i ++) {
		int value = nums[i];
		
		map<int, int>::iterator iter = mapNumber.find(value);
		if (iter != mapNumber.end()) {
			int count = iter->second;
			count++;
			repetKey = value;
			break;
		}
		else
		{
			mapNumber.insert(pair<int, int>(value, 1));
		}
	}
	
	return repetKey;
	
	
	
	
	
}

int main ()
{
//		const int a[] = { 4, -3, 5, -2, -1, 2, 6, -2 };
//	const int a[] = { 1, 2, 3 };
//	int maxSubSum = MaxSubsequenceSum(a, 0, 7);
//	vector<int> a = { 4, -3, 5, -2, -1, 2, 6, -2 };
	std::vector<int> input = {2,2,27,11,15};
	int count =	findRepeatNumber(input);
    cout << "The max subsequence sum of a is: " << count << endl;
}
