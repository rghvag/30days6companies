
// 581. Shortest Unsorted Continuous Subarray
#include<bits/stdc++.h>
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int endpt=-1;
        int mini=INT_MAX;
        int st=-1;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max){
                max=nums[i];
            }
            else{
                endpt=i;
                mini=min(nums[i],mini);
            } 
        }
        // cout<<endpt<< " "<<mini<<endl;
        for(int i=0;i<=endpt;i++){
            if(nums[i]>mini){
                st=i;
                break;
            }
        }
        // cout<<st;
        if(endpt!=st)
            return endpt-st+1;
        return 0;
    }
};