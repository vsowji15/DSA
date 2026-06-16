class Solution:
    def processStr(self, s: str) -> str:
        res=""
        for i in range(len(s)):
            if s[i]>='a' and s[i]<='z':
                res+=s[i]
            elif s[i]=='*' and len(res)!=0:
                res=res[:len(res)-1]    
            elif s[i]=='#':
                res=res*2
            else:
                res=res[::-1]  
        return res          