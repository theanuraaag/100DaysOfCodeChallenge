// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
void swaap(int l, int r, string&str)
{
    if(l>=r) return;
    swap(str[l],str[r]);
    swaap(l+1,r-1,str);
}

string reverseWord(string str){
    
  //Your code here
  int i=0;
  int j=str.length();
  swaap(i,(j-1),str);
  return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends