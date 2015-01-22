/**
 * Roland Quiros
 * 
 * Q: Implement an algorithm to determine if a string has all unique characters. What if you
 * can not use additional data structures?
 */

#include <cstring>
#include <iostream>

bool isUnique(const char *str) {
    int first = 0;
    int second = 1;
    int len = strlen(str);
    bool repeatFound = false;
    
    if (len > 1) {
        for (first = 0; first < len - 1 && !repeatFound; first++) {
            for (second = first + 1; second < len && !repeatFound; second++) {
                repeatFound |= str[first] == str[second];
            }
        }
    }
    
    return !repeatFound;
}

int main() {
   std::cout << "isUnique(\"ababab\") = " << isUnique("ababab") << std::endl;
   std::cout << "isUnique(\"abcdefg\") = " << isUnique("abcdefg") << std::endl;
   std::cout << "isUnique(\"abcdefab\") = " << isUnique("abcdefab") << std::endl;
   
   return 0;
}
