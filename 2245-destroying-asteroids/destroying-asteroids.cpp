class Solution {
public:
    bool asteroidsDestroyed(int mas, vector<int>& asteroids) {
        long long mass=mas;
        sort(asteroids.begin(),asteroids.end());
        if(asteroids[0]>mass){
            return false;
        }
        vector<int>sml;
        vector<int>lrg;
        long long sm=0;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]<=mass){
                sml.push_back(asteroids[i]);
            }
            else{
                lrg.push_back(asteroids[i]);
            }
            sm+=asteroids[i];
        }
        sm+=mass;
        reverse(sml.begin(),sml.end());
        int i=0,j=0;
        while(i<sml.size() || j<lrg.size()){
            if( j<lrg.size() && mass>=lrg[j]){
                mass+=lrg[j];
                j++;
            }
            else{
                if(i==sml.size()){
                    break;
                }
                mass+=sml[i];
                i++;
            }
        }
        return mass==sm;
    }
};