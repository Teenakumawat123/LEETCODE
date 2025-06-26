class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>v(n);
        stack<int>st;
        st.push(n-1);
        v[n-1]=0;
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && temp[st.top()]<=temp[i]) st.pop();
            if(st.size()==0) v[i]=0;
            else v[i]=st.top()-i;
            st.push(i);
        }
        return v;
    }
};