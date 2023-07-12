// https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1

class Solution{
    public:
    //You need to complete this fucntion
    long long mod=1e9+7;
    long long power(int N,int R)
    {
        long long res=1;
        while(R>0)
        {
            if((R&1)>0)
                res=((res%mod)*(N%mod))%mod;
            N=((N%mod)*(N%mod))%mod;
            R=R>>1;
        }
        return res;
    }

};

