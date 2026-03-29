class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vow;
        for(int i=0;i<s.size();i++){
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vow.push_back(s[i]);
        }
        int j=vow.size()-1;
        for(int i=0;i<s.size();i++){
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            s[i]=vow[j];
            j--;
        }
        }
        return s;
    }
};