class Solution {
public:
    string removeOccurrences(string s, string t) {
    int n=t.size();
    if(s.size()<n){
       return s;
    }
    stack<char>st;
    string temp="";
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
        int f=0;
        if(st.size() >= n){
            temp="";
            while(1){
                f++;
                temp+=st.top();
                st.pop();
                if(f==n){
                    break;
                }
            }  
            reverse(temp.begin(),temp.end());
            if(temp!=t){
                for(int i=0;i<temp.size();i++){
                    st.push(temp[i]);
                }
            }
        }
    }
    string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};