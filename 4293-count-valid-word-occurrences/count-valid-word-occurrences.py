class Solution:
    def countWordOccurrences(self, chunks: list[str], queries: list[str]) -> list[int]:
        s=""
        str=[]
        for i in range(len(chunks)):
            s+=chunks[i]   
        r=""    
        for i in range(len(s)):
            if s[i]<='z' and s[i]>='a':
                r+=s[i]
            elif s[i]=='-':
                if i==0 or i==len(s)-1:
                    str.append(r)
                    r=""
                elif (s[i-1]<='z' and s[i-1]>='a') and (s[i+1]<='z' and s[i+1]>='a'):
                    r+=s[i]
                else:
                     str.append(r)
                     r=""
            else:
                str.append(r)
                r=""
        str.append(r)  
        freq={}
        for sr in str:
            freq[sr]=freq.get(sr,0)+1
        a=[]    
        for i in range(len(queries)):
            a.append(freq.get(queries[i],0))
        return a    