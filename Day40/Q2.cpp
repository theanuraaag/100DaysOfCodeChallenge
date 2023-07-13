// https://practice.geeksforgeeks.org/problems/unique-frequencies-of-not/1

class Solution
{
    public:
    unordered_map<int,int> mp;
    
    bool isFrequencyUnique(int n, int arr[])
    {
        sort(arr,arr+n);
        
        int count = 1;
        for(int i = 1;i < n;i++){
        if (arr[i-1] == arr[i]){
            count++;
        }else{
            if (mp[count] > 0){
                return false;
            }else{
                mp[count]++;
                count = 1;
            }
          }
        }
        
    return true;
    }
};