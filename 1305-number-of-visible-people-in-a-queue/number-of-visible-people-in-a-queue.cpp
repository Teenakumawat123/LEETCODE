class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        int n=h.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(h[n-1]);
        for(int i=n-2;i>=0;i--){
            int count=0;
            while(st.size()>0 && st.top()<=h[i]) {
               st.pop();
               count++;
            }
            if(st.size()!=0) count++;
            ans[i]=count;
            st.push(h[i]);
        }
        return ans;
    }
};