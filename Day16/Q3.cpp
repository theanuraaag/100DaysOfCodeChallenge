// https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    // with O(1) extra space.
    void arrange(long long arr[], int n)
    {
        // Your code here
        long long last, correct;
        for (int i = 0; i < n; i++)
        {
            last = arr[i];
            long long value = arr[i];
            if (value >= i)
                correct = arr[arr[i]];
            else
                correct = (arr[arr[i]] / n);

            arr[i] = last * n + correct;
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] % n;
        }
    }
};

//{ Driver Code Starts.

int main()
{

    int t;

    cin >> t;
    while (t--)
    {

        int n;

        cin >> n;
        long long A[n];

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        Solution ob;

        ob.arrange(A, n);

        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

/* Complexity
    Time complexity:
        O(n)

    Space complexity:
        O(1)
*/