// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        string newstring;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 65 && s[i] <= 90) {
                newstring.push_back(s[i] + 32);
            } 
            else if(s[i] >= 97 && s[i] <= 122) {
                newstring.push_back(s[i]);
            }
            else if(s[i] >= '0' && s[i] <= '9') {
                newstring.push_back(s[i]);
            }
        }
        cout << newstring;
        int i = 0, j = newstring.length() - 1;
        while(i <= j) {
            if(newstring[i] != newstring[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

/* Complexity
    Time complexity:
        O(n)

    Space complexity:
        O(n)
*/



