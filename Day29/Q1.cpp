// https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests/description/

class Solution {
public:
int ans=0;
    void solve(int idx,vector<vector<int>>&requests,int l,vector<int>&temp){
        if(idx==requests.size()){
            for(auto i:temp)if(i!=0)return;
            ans=max(ans,l);
            return;
        }
        solve(idx+1,requests,l,temp);
        temp[requests[idx][0]]--;
        temp[requests[idx][1]]++;
        solve(idx+1,requests,l+1,temp);
        temp[requests[idx][0]]++;
        temp[requests[idx][1]]--;
    }

    int maximumRequests(int n, vector<vector<int>>& requests) {
     vector<int>temp(n,0);
     solve(0,requests,0,temp);
     return ans;   
        
    }
};