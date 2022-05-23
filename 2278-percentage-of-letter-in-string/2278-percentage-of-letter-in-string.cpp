class Solution {
public:
    int percentageLetter(string s, char l) {
        int len=s.size();
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        int ans=0;
        for(auto ch:mp){
                if(ch.first==l) ans=ch.second;
        }
        return ans*100/len;
    }
};