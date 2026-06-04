class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        //p->people ,l->limits
        sort(p.begin(),p.end());
        int i=0;
        int j=p.size()-1;
        int b=0;//boats
        while(i<j){
            if((p[i]+p[j])>l){
                j--;
                b++;
            }
            else{
                i++;
                j--;
                b++;
            }
        }
        if(i==j) b++;
        return b;
    }
};