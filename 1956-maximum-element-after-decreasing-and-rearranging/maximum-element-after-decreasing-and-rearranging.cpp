class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++){
            if(i == 0){
                arr[i] = 1;
            }
            else{
                arr[i] = min(arr[i],arr[i-1]+1);
            }
        }
        return arr[arr.size()-1];
    }
};