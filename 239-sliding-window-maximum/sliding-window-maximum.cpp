class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        int n=nums.size();
        vector<int>next(n);
        stack<int>st;
        next[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && nums[st.top()]<=nums[i]) st.pop();
            if(st.size()==0) next[i]=n;
            else next[i]=st.top();
            st.push(i); 
        }
        for(int i=0;i<n;i++){
            cout<<next[i]<<" ";
        }
        vector<int>ans;
        int j=0;
        for(int i=0;i<n-k+1;i++){
            if(j<i) j=i;
            int mx=nums[j];
            while(j<i+k){
             mx=nums[j];
             if(next[j]>=i+k) break;
             j=next[j]; 
            }
            ans.push_back(mx);
        }
        return ans;
    }
};
