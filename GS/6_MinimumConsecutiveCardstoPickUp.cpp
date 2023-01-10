// 2260. Minimum Consecutive Cards to Pick Up
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,pair<int,int>> m;
        int mini=INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(m.count(cards[i])){
                mini=min(mini,i-m[cards[i]].second);
                
            }
            else {
                m[cards[i]].first++;
            }
            m[cards[i]].second=i;
            
        }
        if(mini==INT_MAX) return -1;
        return mini+1;
    }
};
