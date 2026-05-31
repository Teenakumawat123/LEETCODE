class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mp;
        int min_d=INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(mp.find(cards[i])!=mp.end()){
                min_d=min(min_d,i-mp[cards[i]]+1);
            }
            mp[cards[i]]=i;
        }
        return min_d==INT_MAX?-1:min_d;
    }
};