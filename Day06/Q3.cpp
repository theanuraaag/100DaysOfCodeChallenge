// https://leetcode.com/problems/check-if-matrix-is-x-matrix/description/

class Solution {
public:
    bool checkXMatrix(vector<vector<int>> &grid)
{
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if(i==j || i+j == grid.size()-1){
                if(grid[i][j]!=0){
                    
                }
                else return false;
            }
            else{
                if(grid[i][j]==0){
                    
                }
                else return false;
            }
        }
        
    }
    return true;
    
}
};

/* Complexity
    Time complexity:
        O(rows * columns) 

    Space complexity:
        O(1)
*/