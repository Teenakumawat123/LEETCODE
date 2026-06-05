class Solution {
public:
    int findMinFibonacciNumbers(int k) {
      vector<int> v = {1, 1};

      while (v.back() < k) {
       int n = v[v.size()-1] + v[v.size()-2];
       v.push_back(n);
        }
        int ans=0;
        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i] <= k) {
                k -= v[i];
                ans++;
            }

            if (k == 0) break;
        }

        return ans;
    }
};