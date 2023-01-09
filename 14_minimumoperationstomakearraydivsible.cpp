// // 2344
// #include<bits/stdc++.h>
// class Solution {
// public:
//     int gcd(int a,int b){
//         if(a==0) return b;

//         return gcd(b%a,a);
//     }
//     int minOperations(vector<int>& nums, vector<int>& numsDivide) {
//         int g=0;int ans=0;
//         for(int i=0;i<numsDivide.size();i++){
//             g=gcd(g,numsDivide[i]);
//         }

//        sort(nums.begin(),nums.end());
//        for(int i=0;i<nums.size();i++){
//            if(g%nums[i]==0){
//                return ans;
//            }
//            else ans++;
//        }
//        if(ans<nums.size())
//         return ans;
//        else return -1;
//     }
// };