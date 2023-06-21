// https://practice.geeksforgeeks.org/problems/reverse-coding2452/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
        long  ans=((long)n*(long)(n+1));
        ans/=2;
        return ans%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
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