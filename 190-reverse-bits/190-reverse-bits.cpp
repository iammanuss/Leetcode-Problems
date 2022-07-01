class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0,i=0;
        while(i<32){
            int mask=(n>>i)&1;
            //cout<<mask<<" ";
            ans=ans|(mask<<(31-i));
            i++;
        }
        return ans;
    }
};