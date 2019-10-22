//
//  Car.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Car.hpp"
#include "iostream"
using namespace std;

Car::Car(char* name)
{
	this->carName = name;
}

Car::~Car()
{
	cout<<"~Car"<<endl;
}
