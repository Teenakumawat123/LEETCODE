class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;//create a map to store the frequency of each element 
        vector<int>ans; // create a vector to store final answer
        int n=nums.size();// size of given nums 

        //count the frequency of each element 
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        //-->find elements whose frequency is greater than (n/3)
        for(auto t :mp){
          if(t.second>(n/3)) ans.push_back(t.first); // if frequency is >(n/3),add it to the answer
        }
        // return the final answer
        return ans;
    }
};