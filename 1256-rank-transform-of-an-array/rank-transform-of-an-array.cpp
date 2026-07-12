class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>d=arr;
        unordered_map<int,int>mp;
        sort(d.begin(),d.end());
        int idx=1;
        for(int x:d){
            if(mp.find(x)==mp.end()){
                mp[x]=idx;
                idx++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }

       return arr;
    }
};