class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int idx=max_element(nums.begin(),nums.end())-nums.begin();
        reverse(nums.begin(),nums.begin()+idx+1);
        reverse(nums.begin()+idx+1,nums.end());
        reverse(nums.begin(),nums.end());
        return nums[0];
    }
};