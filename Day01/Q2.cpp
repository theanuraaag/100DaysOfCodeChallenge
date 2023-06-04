// https://leetcode.com/problems/student-attendance-record-i/description/

class Solution {
public:
    bool checkRecord(string s) {
        int l = s.size();
        int countA=0;
        int countL=0;
        int maxL=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='L') { countL++; }
            else{ countL=0;}
            if(s[i]=='A') { countA++; }
            
            

            if(countA >= 2 || countL >=3) {
            return false;
            }
        }
        return true;
    }
};

/* Complexity
    Time complexity:
        O(n)

    Space complexity:
        O(1) 
*/