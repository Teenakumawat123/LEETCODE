class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        stack<int>st;
        st.push(nums[n-1]);
        for(int i=2*n-1;i>=0;i--){
            while(st.size()>0 && st.top()<=nums[i%n]) st.pop();
            if(st.size()==0) ans[i%n]=-1;
            else ans[i%n]=st.top();
            st.push(nums[i%n]);
        }
        return ans;
    }
};