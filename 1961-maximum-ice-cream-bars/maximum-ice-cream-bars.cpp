class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int mx=*max_element(costs.begin(),costs.end());
        vector<int>freq(mx,0);
        for(int i=0;i<costs.size();i++){
            freq[costs[i]-1]++;
        }
        int cnt=0,x=-1;
        for(int i=0;i<mx;i++){
             while(freq[i]-- && coins>=i+1){
                coins-=i+1;
                cnt++;
             }
             if(coins<i+1){
                  x=0;
                break;
                }
        }
        return cnt;
    }
};