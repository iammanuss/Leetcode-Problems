class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0,pref=0,suff=0,idx,diff=INT_MAX;
        for(auto x:nums)
            sum+=x;
        for(int i=0;i<nums.size();i++)
        {
            pref+=nums[i];
            suff=sum-pref;
            int a=pref/(i+1);
            int b=0;
            if((nums.size()-i-1)!=0)
                b=suff/(nums.size()-i-1);
            
            if(diff>abs(a-b))
            {
                diff=abs(a-b);
                idx=i;
            }
        }
        return idx;
    }
};