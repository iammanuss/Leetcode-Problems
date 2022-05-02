class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even,odd;
        for(auto i:nums){
            if(i&1) odd.push_back(i);
            else even.push_back(i);
        }
        vector<int>ans;
        for(auto i:even) ans.push_back(i);
        for(auto i:odd) ans.push_back(i);
        return ans;
    }
};