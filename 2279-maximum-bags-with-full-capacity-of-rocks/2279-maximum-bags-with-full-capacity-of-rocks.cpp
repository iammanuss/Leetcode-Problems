class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int add_rocks) {
        for(int i=0;i<c.size();i++){
            c[i]=c[i]-r[i];
        }
        int ans=0;
        sort(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            if(c[i]!=0 && add_rocks>=c[i]){
                add_rocks=add_rocks-c[i];
                c[i]=0;
            }
            if(c[i]==0) ans++;
        }
        return ans;
    }
};