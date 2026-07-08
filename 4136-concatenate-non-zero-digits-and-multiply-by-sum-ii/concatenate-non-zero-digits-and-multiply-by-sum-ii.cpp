class Solution {
public:
   int MOD=1e9+7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
        int n=s.size();
        vector<long long>pre(n);
        vector<long long>dig(n);
        vector<long long>power(n+1,0);
        vector<int>cnt(n);

       power[0]=1;
       for(int i=1;i<=n;i++){
        power[i]=(power[i-1]*10)%MOD;
       }

        pre[0]=s[0]-48;
        for(int i=1;i<s.size();i++){
            pre[i]=(pre[i-1]+(s[i]-48));
        }

       cnt[0]=(s[0]!='0')?1:0;
       for(int i=1;i<n;i++){
        cnt[i]=cnt[i-1]+((s[i]!='0')?1:0);
       }

        dig[0]=s[0]-48;
        for(int i=1;i<n;i++){
           int digit=s[i]-'0';
           if(digit!=0){
            dig[i]=((dig[i-1]*10) +digit)%MOD;
           } else{
            dig[i]=dig[i-1];
           }
        }
        // for(long long x:dig) cout<<x<<" ";
        // cout<<endl;
       vector<int>ans(q.size());
        for(int i=0;i<q.size();i++){
            int l=q[i][0];
            int r=q[i][1];

            long long sum=pre[r]-((l==0)?0:pre[l-1]);
            // cout<<sum<<" ";

            int before=(l==0)?0:dig[l-1];//ye humne esliye nikal hai jisse hamari calculation complex na ho

            int k=cnt[r]-((l==0)?0:cnt[l-1]);

            long long x=(dig[r]-(before*power[k]%MOD)+MOD)%MOD;

            cout<<x<<" ";

            ans[i]=(int)((x*sum)%MOD);
        }
        return ans;
    }
};