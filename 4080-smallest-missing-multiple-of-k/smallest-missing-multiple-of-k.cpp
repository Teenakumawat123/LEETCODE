class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s;
        for(int x:nums) s.insert(x);
        int i=1;
        while(true){
             if(s.find(i)==s.end()){
                if(i%k==0){
                 return i;
                 break;
                 }
            }
            i++;
        }
        return 0;
    }
};