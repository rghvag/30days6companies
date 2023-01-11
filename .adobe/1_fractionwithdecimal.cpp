// 166
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
       long long int n=(long long)numerator;
        long long int d=(long long)denominator;
          string s="";
        if(n==0)return "0";
        int c=0;
        if(n<0) {
            n*=-1;
            c++;
        }
        if(d<0){
            c++;
            d*=-1;
        }
       
        if(c==1){
            s=s+"-";
        }

        if(n>=d){
            long long int x=n/d;
            s=s+to_string(x);
        }
        else{
            s=s+'0';
        }

        long long int r=n%d;
        if(r==0) return s;
        s=s+'.';
        int count=0;
        int z=0;
        int flag=0;
        unordered_map<int,pair<int,int>> m;

        while(r!=0)
        {
            if(m.count(r)){
                z=count-m[r].second;
                s=s+')';
                flag=1;
                break;
            }
            m[r].first++;
            m[r].second=count++;
            r=r*10;
            int x=r/d;
            s+=to_string(x);
            r=r%d;
        }
        if(flag==1)
            s.insert(s.size()-z-1,"(");
        return s;
    }
};