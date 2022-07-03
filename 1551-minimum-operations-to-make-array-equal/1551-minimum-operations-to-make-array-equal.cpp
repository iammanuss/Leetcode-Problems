class Solution {
public:
    int minOperations(int n) {
        int min_ops=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i] = 2 * i + 1;
        }
        sort(v.begin(),v.end());
        int sum = accumulate(v.begin(),v.end(),0);
        sum/=n;
        for(auto i:v){
            min_ops+=abs(sum-i);
        }
        return min_ops/2;
    }
};