class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        if(arr.size()==2) return {{arr[0],arr[1]}};
        int i=0,j=1;
        int diff=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            diff=min(diff,abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==diff){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};