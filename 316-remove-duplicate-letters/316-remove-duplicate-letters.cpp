class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans="";
        int freq[256]={0};
        bool found[256]={0};
        for(char &c:s)
            freq[c]++;
        for(char &c:s){
            freq[c]--;
            if(found[c])
                continue;
            while(c<ans.back()&&freq[ans.back()]){
                found[ans.back()]=false;
                ans.pop_back();
            }
            found[c]=true;
            ans+=c;
        }
        return ans;
    }
};