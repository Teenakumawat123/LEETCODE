class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int aR) {
        //c->capacity ,r->rocks,aR->additionalRocks 
        vector<int>v;
        int bag=0;
        for(int i=0;i<c.size();i++){
            if((c[i]-r[i])==0) bag++;
            else{
                v.push_back((c[i]-r[i]));
            }
        }
        if(v.size()==0) return bag;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]<=aR) {bag++;aR-=v[i];}
            if(aR==0) break;
        }
        return bag;
    }
};