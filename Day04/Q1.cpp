// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        while(i < n && j < m)
        {
            if(nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j])
                j++;
            else 
                i++;
        }
        return ans;
    }
};

/* Complexity
    Time complexity:
        O(N log N)

    Space complexity:
        O(min(nums1.size(), nums2.size())) 
*/