class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>vec;
        set<vector<int>>set;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int s=j+1;
                int e=n-1;
                while(s<e){
                    if(nums[i]+nums[j] == target-nums[s]-nums[e]){
                        set.insert({nums[i],nums[j],nums[s],nums[e]});
                        s++;
                        e--;
                    }
                    else if(nums[i]+nums[j] < target-nums[s]-nums[e])   s++;
                    else e--;
                }
            }
        }
        for(auto i:set) vec.push_back(i);
        return vec;
    }
};