class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
       vector<int>pre(n);
       vector<int>next(n);
        stack<int>st;

        pre[0]=-1;
        st.push(0);
        for(int i=1;i<n;i++){
            while(st.size()>0 && h[st.top()]>=h[i] ) st.pop();
            if(st.size()==0) pre[i]=-1;
            else pre[i]=st.top();
            st.push(i);
        }

        while(st.size()>0) st.pop();

        next[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && h[st.top()]>=h[i]) st.pop();
            if(st.size()==0) next[i]=n;
            else next[i]=st.top();
            st.push(i); 
        }

        int max_area=INT_MIN;
        for(int i=0;i<n;i++){
            max_area=max(max_area,h[i]*(next[i]-pre[i]-1));
        }
        
        return max_area;
    }
};