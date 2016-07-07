//
//  StringHelper.cpp
//  cpp_practice
//
//  Created by DesenGuo on 2016-07-06.
//  Copyright © 2016 divecommunications. All rights reserved.
//
#include <iostream>
#include "StringHelper.hpp"
using namespace std;

long int StringHelper::countCharInString(char target, string source)
{
    long int charCount=count(source.begin(), source.end(), target);
    cout << "The string '" << source << "' has "
    << charCount
    << " occurrences of the letter '"
    << target
    << "'"
    << endl;
    return charCount;
}

bool StringHelper::removeFirstCharIfFound(char target, string& source)
{
    auto it = find(source.begin(), source.end(), target);
    if (it == source.end())//"/0"
    {
        return false;
    }
    source.erase(it);
    return true;
    
}