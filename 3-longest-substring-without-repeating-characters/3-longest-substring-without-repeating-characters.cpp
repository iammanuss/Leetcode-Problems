class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        if(s.size()==0) return 0;
        unordered_set<char>st;
        int len=INT_MIN;
        while(i<n){
            if(st.find(s[i])!=st.end()){
                len=max(len,int(st.size()));
                st.erase(s[j]);
                j++;
            }
            else {
                st.insert(s[i]);
                i++;
            }
            if(n==st.size()) return n;
        }
        if(int(st.size())>len) return int(st.size());
        else return len;
    }
};