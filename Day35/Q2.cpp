// https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
         for(int i=0;i<n;i++)
         {
             int left=i+1;
           int  right=n-1;
             while(left<right)
             {
                 int sum=arr[i]+arr[left]+arr[right];
                 
                 if(sum==0)
                 {
                     return true;
                 }
                 else if(sum<0)
                 {
                     left++;
                 }
                 else{
                     right--;
                 }
             }
             
         }
         
         return false;
    }
};