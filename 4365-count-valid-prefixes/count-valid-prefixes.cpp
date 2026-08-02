class Solution {
public:
    int countValidPrefixes(string s) {
        int o=0,z=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                z++;
            }
            else{
                o++;
            }
            if(abs(z-o)<=1){
                cnt++;
            }
        }
        return cnt;
    }
};