class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int x=arr[i];
            int ele=((x%k)+k)%k;
            mp[ele]++;
        }
        if(mp.find(0)!=mp.end()){
            if(mp[0]%2!=0) return false;
            mp.erase(0);
        }
        for(auto p:mp){
            int ele=p.first;
            int rem=k-ele;
            if(mp.find(rem)==mp.end()) return false;
            if(mp[ele]!=mp[rem]) return false;
        }
        return true;
    }
};