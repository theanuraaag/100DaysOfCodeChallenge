// https://practice.geeksforgeeks.org/problems/set-bits0143/1

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N>0)
        {
            N&=(N-1);
            count++;
        }
        return count;
    }
};