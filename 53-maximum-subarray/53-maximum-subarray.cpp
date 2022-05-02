class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int cur_sum=0;
        for(int i=0;i<nums.size();i++){
            cur_sum+=nums[i];
            if(maxi<cur_sum) maxi=cur_sum;
            if(cur_sum<0) cur_sum=0;
        }
        return maxi;
    }
};