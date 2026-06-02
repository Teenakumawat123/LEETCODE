class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k>=arr.size()){
            int ele=INT_MIN;
            for(int i:arr){
                ele=max(ele,i);
            }
            return ele;
        }
        // int w_cnt=1;
        // int w=-1;
        // int pw=-1;
        // int i=0;
        // while(w_cnt!=k){
        //     w=max(arr[i],arr[i+1]);
        //     if(w==arr[i]){
        //         arr.erase(arr.begin()+(i+1));
        //         arr.push_back(arr[i+1]);
        //     }
        //     if(w==arr[i+1]){
        //         arr.erase(arr.begin()+(i));
        //         arr.push_back(arr[i]);
        //     }
        //     if(pw==w) w_cnt++;
        //     pw=w;
        // }
        // return w;

        int w=arr[0];
        int w_cnt=0;
        for(int i=1;i<arr.size();i++){
            if(w>arr[i]) w_cnt++;
            else{
                w=arr[i];
                w_cnt=1;
            }
            if(w_cnt==k){return w;break;}
        }
        return w;
    }
};