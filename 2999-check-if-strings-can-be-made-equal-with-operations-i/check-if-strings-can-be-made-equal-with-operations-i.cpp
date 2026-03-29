class Solution {
public:
bool first_op(string s1,string s2,int i,int j){
    swap(s1[i],s1[j]);
    if(s1==s2) return true;
    else return false;
}
    bool canBeEqual(string s1, string s2) {
        string a1=s1;
        string a2=s2;
        if(s1==s2) return true;
        bool first=first_op(s1,s2,0,2);
        if(first) return true;
        else {s1=a1; s2=a2;}
        bool second =first_op(s1,s2,1,3);
        if(second) return true;
        else {s1=a1; s2=a2;}
        swap(s1[0],s1[2]);
        swap(s1[1],s1[3]);
        if(s1==s2) return true;
        else return false;
    }
};