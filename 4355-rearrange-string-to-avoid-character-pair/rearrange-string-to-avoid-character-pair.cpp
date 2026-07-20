class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int cnt=0;
        string r;
        for(int i=0;i<s.size();i++){
          if(s[i]==y){
            cnt++;
          }
          else{
            r.push_back(s[i]);
          }
        }
        string t(cnt,y);
        t=t+r;
        return t;
    }
};