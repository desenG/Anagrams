//
//  AreAnagrams.hpp
//  cpp_practice
//
//  Created by DesenGuo on 2016-07-06.
//  Copyright © 2016 divecommunications. All rights reserved.
//

//An anagram is a word formed from another by rearranging its letters, using all the original letters exactly once; for example, orchestra can be rearranged into carthorse.
//
//Write a function that checks if two words are anagrams of each other.
//
//For example, areStringsAnagrams("neural", "unreal") should return true as arguments are anagrams of each other.

#include <string>
#include <iostream>
#include <fstream>

using namespace std;


#ifndef AreAnagrams_hpp


#define AreAnagrams_hpp


class AreAnagrams
{
public:
    static bool areStringsAnagrams(string a, string b);
};

#endif /* AreAnagrams_hpp */
