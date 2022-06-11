class Solution {
public:
    int partitionArray(vector<int>& v, int k) {
        if(v.size()==1){
            return 1;
        }
        sort(v.begin(),v.end());
        int i=1,cnt=0;
        int mini=v[0];
        while(i < v.size()){
            if(abs(mini-v[i])>k){
                mini=v[i];
                cnt++;
            }
            i++;
        }
        return cnt+1;
    }
};