class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>vec;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int j=i+1;
            int k=n-1;
            while(k>j)
            {
                if(k<n-1 && nums[k]==nums[k+1])
                {
                    k--;
                    continue;
                }
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    vec.push_back(v);
                    k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                    j++;
            }
        }
        
        return vec;
    }
};