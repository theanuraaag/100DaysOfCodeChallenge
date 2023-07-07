// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

class Solution{

    public:
        //Function to merge the arrays.
         void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0;
            int k=n-1;
            int j=0;
            while(i<=k and j<m){
                if(arr1[i]>=arr2[j]){
                    long long prev=arr1[k];
                    arr1[k]=arr2[j];
                    arr2[j]=prev;
                    k--;
                    j++;
                }else{
                    i++;
                }
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};