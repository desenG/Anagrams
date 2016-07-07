//
//  StringHelper.hpp
//  cpp_practice
//
//  Created by DesenGuo on 2016-07-06.
//  Copyright © 2016 divecommunications. All rights reserved.
//

#ifndef StringHelper_hpp
#define StringHelper_hpp

#include <string>
using namespace std;

class StringHelper
{
    public:
        static long int countCharInString(char target,string source);
        static bool removeFirstCharIfFound(char target,string& source);//true--found and remove, false--no found
};

#endif /* StringHelper_hpp */
