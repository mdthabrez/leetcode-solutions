/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/


class Solution {
public:
    bool isPalindrome(string s) {
        
        string ns;
        
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
                ns.push_back(tolower(s[i]));
        }
        
        for(int i=0,j=ns.size()-1;i<ns.size()/2;i++,j--)
        {
            if(ns[i]!=ns[j])
                return false;
        }
        return true;
    }
};

