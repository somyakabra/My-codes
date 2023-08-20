class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //check if strings are not equal
        if(str1 + str2 != str2 + str1)
        return "";
        //check if string are equal
        return str1.substr(0,gcd(str1.size(),str2.size()));
    }
};
