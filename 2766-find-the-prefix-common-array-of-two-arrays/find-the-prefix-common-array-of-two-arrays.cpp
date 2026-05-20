class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        vector<int>C(A.size());
        for(int i=0;i<A.size();i++){
            mp[A[i]]++;
            mp[B[i]]++;
            int c=0;
            for(auto x:mp){
              if(x.second>=2) c++;
            }
            C[i]=c;
        }
        return C;
    }
};