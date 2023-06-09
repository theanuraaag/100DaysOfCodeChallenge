// https://leetcode.com/problems/01-matrix/description/

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size( ) ;
        int m = mat[0].size() ;
        vector<vector<int>>vis(n ,vector<int>(m , 0)) ;
        vector<vector<int>>ans(n ,vector<int>(m , 0)) ;
        queue<pair<pair<int,int> ,int>>q ;
        for(int i = 0 ;i<n ;i++){
            for(int j = 0 ;j<m ;j++){
                if(mat[i][j]==0){
                    q.push({{i ,j} ,0}) ;
                    vis[i][j] = 1 ;
                }else{
                    vis[i][j] = 0 ;
                }
            }
        }
        int dr[] = {-1 ,0 ,1 ,0} ;
        int dc[] = { 0 ,-1 ,0 ,1} ;
        cout<<q.size() ;
        while(!q.empty()){
            int i = q.front().first.first ;
            int j = q.front().first.second ;
            int cnt = q.front().second ;
            q.pop() ;
            ans[i][j] = cnt ;
            for(int z = 0 ;z<4 ;z++){
                int nr = i + dr[z] ;
                int nc = j + dc[z] ;
                if(nr>=0 and nr<n and nc>=0 and nc<m and vis[nr][nc]==0){
                    cout<<"Nr"<<nr<<endl ;
                    cout<<"nc"<<nc<<endl ;
                    vis[nr][nc] = 1 ;
                    q.push({{nr,nc} ,cnt+1}) ;
                }
            } 
        }
        return ans ;

        

    }
};

/* Complexity
    Time complexity:
        O(n * m)

    Space complexity:
        O(n * m)
*/