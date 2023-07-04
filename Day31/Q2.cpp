// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if ( k <= 1 ) {
            return 0;
        }

        long long int ans = 0;

       

        long long int s = 0;
        long long int e = 0;
        long long int p = 1;

        while ( e<n ) {

            p = p*a[e];

            while ( p>=k ) {
                p = p/a[s];
                s ++;
            }

            ans += e-s+1;

            e ++;
        }

        return ans;
    }
};