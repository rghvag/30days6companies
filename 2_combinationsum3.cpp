#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void  combinations(int k,int idx, int n,vector<int>temp,vector<vector<int>>&ans)
    {
        if(n==0)
        {
            if(temp.size()==k){
                ans.push_back(temp);
                return;
            }
        }
        if(n==0 || temp.size()==k) return;

        for(int i=idx;i<=9;i++)
        {
            temp.push_back(i);
            combinations(k,i+1,n-i,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinations(k,1,n,temp,ans);
        return ans;
    }
};
int main(){

return 0;
}