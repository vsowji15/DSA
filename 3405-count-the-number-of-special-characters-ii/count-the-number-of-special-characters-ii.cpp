class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>sml(26,-1);
        vector<int>lrg(26,-1);
        int idx;
        for(int i=0;i<word.size();i++){
            if(word[i]<='z' && word[i]>='a'){
                idx=word[i]-'a';
                sml[idx]=i;
            }
            else{
                idx=word[i]-'A';
                if(lrg[idx]==-1){
                   lrg[idx]=i;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(sml[i]>-1 && lrg[i]>-1 && sml[i]<lrg[i]){
                cnt++;
            }
        }
        return cnt;
    }
};