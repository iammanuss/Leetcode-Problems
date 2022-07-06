class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cur_prod=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cur_prod==0) cur_prod=1;
            cur_prod*=nums[i];
            maxi=max(maxi,cur_prod);    
        }
        cur_prod=1;
        for(int i=nums.size()-1;i>-1;i--){
            if(cur_prod==0) cur_prod=1;
            cur_prod*=nums[i];
            maxi=max(maxi,cur_prod);    
        }
        return maxi;
    }
};