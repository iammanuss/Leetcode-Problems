class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int x=0,f=0;
        for(auto i:nums) {
            x+=i;
            if(i==0) f=1;
        }
        if(f==0) return 0;
        if(sum==x) return n;
        else return sum-x;
    }
};