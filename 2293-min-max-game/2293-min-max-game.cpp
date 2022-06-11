class Solution {
public:
    int minMaxGame(vector<int>& v) {
        if(v.size()==1){
            return v[0];
        }
        vector<int>ans=v;
        v.clear();
        while(ans.size()!=1){
            int i=1,f=1;
            while(i<ans.size()){
                if(f==1){
                    v.push_back(min(ans[i-1],ans[i]));
                    f=0;
                }else{
                    v.push_back(max(ans[i-1],ans[i]));
                    f=1;
                }
                i+=2;
            }
            ans=v;
            v.clear();
        }
         return ans[0];
    }
};