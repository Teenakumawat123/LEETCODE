class Solution {
public:
    int sum(int n){
        int s=0;
        while(n>0){
            s+=(n%10);
            n/=10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int min_ele=INT_MAX;
        for(int x:nums){
            int a=sum(x);
            min_ele=min(min_ele,a);
        }
        return min_ele;
    }
};