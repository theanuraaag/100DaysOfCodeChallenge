// https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int mini,maxi;

        vector<int> ans;

        for(int i=0; i<matrix.size(); i++){
            int k=0;
            mini=999999;
            for(int j=0; j<matrix[0].size(); j++){

                if(mini > matrix[i][j]){

                    mini=matrix[i][j];
                    k=j;
                }
            }
            maxi=mini;

            for(int j=0; j<matrix.size(); j++){

                maxi=max(maxi,matrix[j][k]);
            }
            if(mini==maxi)
            ans.push_back(mini);
        }
        return ans;
    }
};

/* Complexity
    Time complexity:
        O(rows * columns) 

    Space complexity:
        O(rows)
*/