// https://leetcode.com/problems/find-the-highest-altitude/description/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_altitude = 0;
        int current = 0;
        for(auto i:gain){
            current += i;
            max_altitude = max(max_altitude,current);
        }
        return max_altitude;
    }
};

/* Complexity
    Time complexity:
        O(n)

    Space complexity:
        O(1)
*/