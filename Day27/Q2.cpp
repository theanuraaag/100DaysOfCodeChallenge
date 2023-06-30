// https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1

class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int res = 0;
        int j=0;
       
        
        for(int i=0; i<s.size(); i++){
            
            if( s[i]-'0' == 1){
                
                if(i%2==0){
                    res += 1;
                }
                else{
                    res += 2;
                }
            }
           
        }
        
        
        if( res % 3 == 0) return true;
        else return false;
	}

};