class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        // int sum=0;
        // for(auto i:nums) sum+=i;
        vector<int>pre(nums.size()),suf(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++)  pre[i]=pre[i-1]+nums[i];
        suf[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>-1;i--) suf[i]=suf[i+1]+nums[i];
        
        for(int i=0;i<nums.size();i++){
            if(pre[i] == suf[i])    return i;
        }
        return -1;
    }
};