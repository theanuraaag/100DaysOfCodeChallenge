// https://leetcode.com/problems/equal-row-and-column-pairs/description/

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> b;
        for(int j=0;j<grid[0].size();j++)
        {
            vector<int> a;
            for (int i=0;i<grid.size();i++)
            {
                //vector<int> a;
                a.push_back(grid[i][j]);
            }
            b.push_back(a);  
        }
        int n=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if (grid[i]==b[j])
                    {n++;}
            }   
        }
        return n;

    }
};

/* Complexity
    Time complexity:
        O(m^2)

    Space complexity:
        O(m * n)
*/