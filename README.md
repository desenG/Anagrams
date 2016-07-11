## Description
An anagram is a word formed from another by rearranging its letters, using all the original letters exactly once; for example, orchestra can be rearranged into carthorse.

## 
Use c++ to tell if given two strings are anagrams.

##pseudo code
```
  isAnagrams as true
  first string as source string, second string as target string
  for loop each letter of source string
    if the letter exist in target string
      remove the first letter occursed in target string
    else
      the for loop exit
      isAnagrams as false
  if target string has no letter left
    isAnagrams as true
  else
    isAnagrams as false
```
## Tests
1. With cmake installed, open terminal, go to the path with all the files 
2. Run "make" 
3. 3. Run ".cpp"

## Result
eee and eee are Anagrams.
acb and bac are Anagrams.
adfadf and baadfadfac are not Anagrams.
