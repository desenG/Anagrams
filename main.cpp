//
//  main.cpp
//  cpp_practice
//
//  Created by DesenGuo on 2016-03-13.
//  Copyright © 2016 divecommunications. All rights reserved.
//

#include <iostream>
#include <time.h>
#include "AreAnagrams.hpp"

int main(int argc, const char * argv[]) {
//    clock_t start,end;
//    start = clock();
//    FileHelper::coutLowLetterStatsFromTextFile("input.txt");
//    end = clock();
//    printf("Took : %f\n",(float)(end - start)/(float)CLOCKS_PER_SEC);
    AreAnagrams::areStringsAnagrams("eee", "eee");
    
    AreAnagrams::areStringsAnagrams("acb", "bac");
        
    AreAnagrams::areStringsAnagrams("adfadf", "baadfadfac");

    return(0);
}
