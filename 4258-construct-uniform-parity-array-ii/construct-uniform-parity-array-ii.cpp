class Solution {
public:
    bool even(vector<int>&v){
        for(int x:v){
           if(x%2!=0) {
            return false;
            break;
           }
        }
        return true;
    }
    bool odd(vector<int>&v){
        for(int x:v){
           if(x%2==0) {
            return false;
            break;
           }
        }
        return true;
    }
    bool uniformArray(vector<int>& nums1) {
        if(even(nums1) || odd(nums1)) return true;
        int x=*min_element(nums1.begin(),nums1.end());
        if(x%2!=0) return true;
        return false;
    }
};