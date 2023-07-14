// https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/description/

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int k=2*100000+2;
       vector<int>m(k);
       int mx=0;
        for(int i=0;i<arr.size();i++){
            int c=arr[i];
            if(m[c-difference+100000]!=0)
            m[c+100000]=m[c-difference+100000]+1;
            else
            m[c+100000]=1;
            mx=max(mx,m[c+100000]);
        }
        return mx;
    }
};