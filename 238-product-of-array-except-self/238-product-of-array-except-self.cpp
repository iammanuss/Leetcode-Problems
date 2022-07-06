class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
    int n = v.size();
    vector<int>pref(n),suf(n);
    pref[0] = v[0];
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1]*v[i];
    }
    suf[n-1] = v[n-1];
    for(int i=n-2;i>-1;i--){
        suf[i] = suf[i+1]*v[i];
    }
    vector<int>ans(n);
    ans[0] = suf[1];
    ans[n-1] = pref[n-2];
    for(int i=1;i<n-1;i++){
        ans[i] = pref[i-1] * suf[i+1];
    }
    return ans;
    }
};