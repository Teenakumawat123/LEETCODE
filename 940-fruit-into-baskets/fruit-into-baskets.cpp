class Solution {
public:
    int totalFruit(vector<int>& f) {
        // vector<int>v(fruits.size());
        // for(int x:fruits){
        //     v[x]++;
        // }
        // sort(v.rbegin(),v.rend());
        // return (v[0]+v[1]);

        // unordered_map<int,int>mp;
        // int i=0,j=0;
        // int max_f=INT_MIN;
        // while(j<f.size()){
        //     mp[f[j]]++;
        //     if(mp.size()>2){
        //        max_f=max(max_f,j-i);
        //        i=j-1;
        //        j=i;
        //        mp.clear();
        //     }
        //     else j++;
        // }
        // cout<<(j-i);
        // max_f=max(max_f,j-i);
        // return max_f;

        unordered_map<int, int> basket; 
        int i = 0, maxFruits = 0;
        
        for (int j = 0; j < f.size(); j++) {
            basket[f[j]]++;     
          
            while (basket.size() > 2) {
                basket[f[i]]--;   
                if (basket[f[i]] == 0) {
                    basket.erase(f[i]);
                }
                i++;                  
            }
           
            maxFruits = max(maxFruits, j - i + 1);
        }
        return maxFruits;
    }
};