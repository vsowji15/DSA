class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        vector<int>r1;
        vector<int>r2;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                r1.push_back(s1[i]);
                r2.push_back(s2[i]);
            }
            if(r1.size()>2 or r2.size()>2){
                return false;
            }
        }
        sort(r1.begin(),r1.end());
        sort(r2.begin(),r2.end());
        for(int i=0;i<r1.size();i++){
            if(r1[i]!=r2[i]){
                return false;
            }
        }
        return true;
    }
};