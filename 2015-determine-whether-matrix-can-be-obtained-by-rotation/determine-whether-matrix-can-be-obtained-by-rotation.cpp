class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int cnt=0;
        for(int i=0;i<target.size();i++){
            for(int j=0;j<target[0].size();j++){
                if(target[i][j]==mat[i][j]){
                    cnt++;
                }
            }
        }
        if(cnt==mat.size()*mat.size()){
            return true;
        }
        int n=3;
        int len=target.size();
        vector<vector<int>>t(len,vector<int>(len,0));
        while(n--){
             for(int i=0;i<len;i++){
                for(int j=0;j<len;j++){
                    t[i][j]=mat[len-j-1][i];
                }
             }
        cnt=0;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                 if(t[i][j]==target[i][j]){
                    cnt++;
                }
            }
        }
        if(cnt==len*len){
            return true;
        }
        for(int i=0;i<target.size();i++){
            for(int j=0;j<target[0].size();j++){
                mat[i][j]=t[i][j];
            }
        }
        }
        return false;
    }
};