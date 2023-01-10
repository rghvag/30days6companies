class Solution {
public:
    int trailingZeroes(int n) {
        int b=n/2;
        int a=n/5;
        n=n/5;
        while(1){
            if(n>=5){
                a=a+n/5;
                n=n/5;
            }
            else break;
        }
        
        if(a<b) return a;
        else return b;        
    }
};