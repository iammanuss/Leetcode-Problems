class Solution {
public:
    static bool cmp(const vector<int> &a, const vector<int> &b){
        return a[1]> b[1];    
    }
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(b.begin(), b.end(), cmp);
        int ans= 0;
        for(auto j: b){
            while(t>0 && j[0]>0){
                t--;
                j[0]--;
                ans+= j[1];
            }
        }
        return ans;
    }
};