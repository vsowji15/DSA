class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        k=k%(m*n);
        if(k==0){
            return grid;
        }
        int x=((m*n)-k)/n;
        int y=((m*n)-k)%n;
        int z=n;
        int l=0;
        vector<vector<int>>ans(m);
        for(int i=x;i<m;i++){
            int b;
            if(i==x){
                b=y;
            }
            else{
                b=0;
            }
            for(int j=b;j<n;j++){
                if(z>0){
                    ans[l].push_back(grid[i][j]);
                    z--;
                }
                else{
                    z=n-1;
                    l++;
                    ans[l].push_back(grid[i][j]);
                }
            }
        }
        int a=-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==x && j==y){
                    a=0;
                    break;
                }
                if(z>0){
                    ans[l].push_back(grid[i][j]);
                    z--;
                }
                else{
                    z=n-1;
                    l++;
                    ans[l].push_back(grid[i][j]);
                }
            }
            if(a==0){
                break;
            }
        }
        return ans;
    }
};