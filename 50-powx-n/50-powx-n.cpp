class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long nn=n;
        if(n<0) nn=nn*-1;
        while(nn>0){
            if(nn%2 == 0){
                x=x*x;
                nn/=2;
            }
            else{
                ans=ans*x;
                nn-=1;
            }
        }
        if(n<0) ans=1.0/ans; 
        return ans;
    }
};