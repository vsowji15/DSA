class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int end=x+k-1;
        int st=x;
        while(st<end){
            for(int i=y;i<y+k;i++){
                swap(grid[st][i],grid[end][i]);
            }
            st++;
            end--;
        }
        return grid;
    }
};