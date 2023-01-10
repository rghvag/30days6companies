// 447
#include<bits/stdc++.h>
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
    int n=points.size();
    int ans=0;
    for(int i=0;i<n;i++){
        unordered_map<int,int> m;
        for(int j=0;j<n ;j++){
            if(j==i) continue;
        int d=(points[i][0]-points[j][0])*(points[i][0]-points[j][0])+(points[i][1]-points[j][1])*(points[i][1]-points[j][1]);
            m[d]++;
        }
        
        for(auto it:m){
            if(it.second>=2)
                ans+=it.second*(it.second-1);
        }
        m.clear();
    }
    return ans;
    }
};