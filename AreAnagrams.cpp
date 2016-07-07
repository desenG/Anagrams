//
//  AreAnagrams.cpp
//  cpp_practice
//
//  Created by DesenGuo on 2016-07-06.
//  Copyright © 2016 divecommunications. All rights reserved.
//


#include "AreAnagrams.hpp"
#include "StringHelper.hpp"
bool AreAnagrams::areStringsAnagrams(string a, string b)
{
    cout<< a << " and "<< b;
    //throw std::logic_error("Waiting to be implemented");
    if(a.length()!=b.length())
    {
         cout<< " are not Anagrams." << endl;
        return false;
    }
    
    for(int i;i<a.length();i++)
    {
        if(!StringHelper::removeFirstCharIfFound(a.at(i), b))
        {
            cout<< " are not Anagrams."<< endl;
            return false;
        }
    }
    
    if(b.length()!=0)
    {
        cout<< " are not Anagrams." << endl;
        return false;
    }
    
    cout<< " are Anagrams." << endl;
    return true;
}