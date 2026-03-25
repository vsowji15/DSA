class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<vector<long long>>pre(grid.size(),vector<long long>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
           pre[i][0]=grid[i][0];
        }
        for(int i=0;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                pre[i][j]=pre[i][j-1]+grid[i][j];
            }
        }
        long long hor=0,ver;
        long long hor_sum=0;
        for(int i=0;i<grid.size();i++){
            hor_sum+=pre[i].back();
        }
        for(int i=0;i<grid.size()-1;i++){
            hor+=pre[i].back();
            if(hor_sum-hor==hor){
                return true;
            }
        }
        for(int i=0;i<grid[0].size()-1;i++){
           ver=0;
           for(int j=0;j<grid.size();j++){
            ver+=pre[j][i];
           }
           if(hor_sum-ver==ver){
            return true;
           }
        }
        return false;
    }
};