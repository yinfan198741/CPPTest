//
//  ReadFileTest.hpp
//  MyCplusTest
//
//  Created by fanyin on 2019/10/11.
//  Copyright © 2019 fanyin. All rights reserved.
//

#ifndef ReadFileTest_hpp
#define ReadFileTest_hpp

#include <stdio.h>

class  FileInfoReader {
	
	
public:
	char** readFile(char* filePath,int * lineCount);
	void freePointer(char** header);
	void testFree();
};

#endif /* ReadFileTest_hpp */
