// https://practice.geeksforgeeks.org/problems/-matchsticks-game4906/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int matchGame(long long N) {
        if (N%5==0) return -1;
        return N%5;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}
// } Driver Code Ends

/* Complexity
    Time complexity:
        O(1)

    Space complexity:
        O(1)
*/