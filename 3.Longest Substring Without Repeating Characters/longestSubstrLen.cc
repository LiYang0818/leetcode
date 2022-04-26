/*
For problem, refer to the link below
  https://leetcode.com/problems/longest-substring-without-repeating-characters/

Analysis:
  Assume the char in the string S is only ASCII character， so we can have an array ch2Idx[128] to save the position of the every character in the string
  init values of the array ch2Idx[] are 0,  
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Assume the S has only the ASCII character , define a  intege array to save the posistion of each character if the string, init value 0
        int ch2Idx[128] = {0, };
        int maxLenSubstr = 0;
       
        // To save the position that the duplicated char first time appears
        int dupPos = 0;
        
        if (s.length() == 0) return 0;
        
        //Travers the string till reaching the end of the string
        for (int i = 0; i < s.length(); i++)
        {
            int subLen = 0;
            // Find duplicated char, find a substring without duplicated char
            if (ch2Idx[s[i]] != 0)
            {
                // Important: the duplicated char position should grow only
                dupPos =  ch2Idx[s[i]] > dupPos ? ch2Idx[s[i]] : dupPos;
            }
            // replace the duplicated string char with new position, the index of the char in ths string starts from 1
            ch2Idx[s[i]] = i + 1;

            // get the substring len
            subLen = ch2Idx[s[i]] - dupPos;
            maxLenSubstr = subLen > maxLenSubstr ? subLen : maxLenSubstr;
        }
        return maxLenSubstr;
    }
};
