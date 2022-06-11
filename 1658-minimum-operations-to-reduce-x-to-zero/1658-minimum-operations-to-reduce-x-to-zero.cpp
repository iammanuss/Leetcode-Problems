class Solution {
public:
    int minOperations(vector<int>&a, int x) {
        int n=a.size();
        vector<int>pre(n,0);
        pre[0]=a[0];
        map<int,int>mp;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        int ans=100001;
        for(int i=0;i<n;i++){
            mp[pre[i]]=i+1;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==x){
                ans=i+1;
                break;
            }
        }
        int h=0;
        sum=0;
        for(int i=n-1;i>=0;i--){
            if(sum+a[i]<=x)
                sum+=a[i];
           // sum+=a[i];
            h++;
            if(sum==x){
                ans=min(ans,h);
                break;
            }
            if(mp[x-sum]>0 && mp[x-sum]-1!=i){
                ans=min(ans,h+mp[x-sum]);
            }
        }
        if(ans==100001)
            ans=-1;
        return ans;
        
    }
};