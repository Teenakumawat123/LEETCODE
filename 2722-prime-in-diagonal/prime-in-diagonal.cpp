class Solution {
public:
    bool isPrime(int n){
        if (n <= 1) return false;
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0)
            return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int is_prime=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i])){
                is_prime=max(is_prime,nums[i][i]);
            }
            if(isPrime(nums[i][n-i-1])){
                is_prime=max(is_prime,nums[i][n-i-1]);
            }
        }
        return is_prime;
    }
};