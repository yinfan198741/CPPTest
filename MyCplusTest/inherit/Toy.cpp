//
//  Toy.cpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/21.
//  Copyright © 2019 fanyin. All rights reserved.
//

#include "Toy.hpp"
#include "iostream"
using namespace std;

Toy::Toy(char* toyname)
{
	this->ToyName = ToyName;
}

Toy::~Toy()
{
	cout<<"~Toy"<<endl;
}
