class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        for(int x:asteroids){
            if(mass<x) return false;
            mass+=(long long)x;
        }
        return true;
    }
};