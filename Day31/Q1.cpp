// https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int x1=0,x2=0,mask=0;
        for(auto i:nums)
        {
            x2^=x1&i;
            x1^=i;
            mask=~(x2&x1);
            x2&=mask;
            x1&=mask;
        }
        return x1;
    }
};