class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1) return s;
       map<char,int>mp;
       for(char ch:s){
        mp[ch]++;
       }
       vector<char>v(n,' ');
       int i=0;
       int j=n-1;
      // map<char, int> mp;

char ch;

for (auto it = mp.begin(); it != mp.end(); ++it) {
    if (it->second == 1) {
        ch = it->first;   // character store किया
        mp.erase(it);     // map से remove किया
        break;            // सिर्फ पहला मिला हुआ character चाहिए
    }
}
       for(auto x:mp){
        int a=x.second;
        while(a){
            if(i==j){
                v[i]=x.first;
                a--;
                break;
            }
            v[i]=x.first;
            v[j]=x.first;
            i++;
            j--;
            a-=2;
            if(a==1 && !mp.empty()){
                ch=x.first;
                a--;
            }
        }
       }
       if(v[i]==' ') v[i]=ch;
      string res="";
      for(char c:v){
        res+=c;
      }
      return res;
    }
};