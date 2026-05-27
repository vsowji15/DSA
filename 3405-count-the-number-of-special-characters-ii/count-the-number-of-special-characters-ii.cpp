class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>sml(26,0);
        vector<int>lrg(26,0);
        vector<int>fst(26,0);
        int idx;
        for(int i=0;i<word.size();i++){
            if(word[i]<='z' && word[i]>='a'){
                idx=word[i]-'a';
                sml[idx]++;
            }
            else{
                idx=word[i]-'A';
                lrg[idx]++;
                if(lrg[idx]==1){
                    fst[idx]=sml[idx];
                }
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(sml[i]>0 && lrg[i]>0 && sml[i]==fst[i]){
                cnt++;
            }
        }
        return cnt;
    }
};