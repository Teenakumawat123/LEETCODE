class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
       int s=0;
       int c=0;
       for(int i=0;i<events.size();i++){
        if(c==10) break;
        else if(events[i]=="0" ||events[i]=="1" ||events[i]=="2"||events[i]=="3"||events[i]=="4"||events[i]=="6") s+=stoi(events[i]);
        else if(events[i]=="W") c++;
        else if(events[i]=="WD") s++;
        else s++;
       } 
       return {s,c};
    }
};