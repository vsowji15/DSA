class Solution {
public:
    bool isPrime(int x){
            if(x<=1) return false;
            if(x==2) return true;
            if(x%2==0) return false;
            for(int i=3;i<=sqrt(x);i+=2){
                if(x%i==0){
                    return false;
                }
            }
            return true;
        }
    int sumOfPrimesInRange(int n) {
        int r=0;
        int s=n;
        while(n>0){
            r=(r*10)+(n%10);
            n=n/10;
        }
        int a=min(r,s);
        int b=max(r,s);
        int sm=0;
        for(int j=a;j<=b;j++){
            if(isPrime(j)){
                sm+=j;
            }
        }
        return sm;
    }
};