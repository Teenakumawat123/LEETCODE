class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n=arr.size();
        int count=0;
        // time complexity-->O(n^2)
        /*
        for(int i=0;i<n-1;i++){
            string s=arr[i];
            reverse(s.begin(),s.end());
            for(int j=i+1;j<n;j++){
               if(s==arr[j]) count++;
            }
        }
        return count;*/



        //using set 

        unordered_set<string> s;
        for(int i=0;i<n;i++){
            string a=arr[i];
            reverse(a.begin(),a.end());
            if(s.find(a)!=s.end()) count++;
            else s.insert(arr[i]);
        }
        return count;
    }
};