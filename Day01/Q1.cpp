// https://leetcode.com/problems/construct-the-rectangle/description/ 

class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>v;
        int r;
        r=sqrt(area);
        for(r;r>0;r--)
        {
            if(area%r==0)
            {
                v.push_back(area/r);
                v.push_back(r);
                break;
            }
        }
        return v;
    }
};

/* Complexity
    Time complexity:
        O(log n) + O(n) => O(n)

    Space complexity:
        O(1) 
*/