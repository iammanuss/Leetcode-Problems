class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp; 
        for(auto i:deck)    mp[i]++;   
        int gcd=mp[deck[0]];
        for(auto i:mp)
            gcd=__gcd(gcd,i.second);   
        return gcd != 1;
    }
};