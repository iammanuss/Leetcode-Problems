class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<int>idx;
        for(int i=0;i<number.size();i++){
            if(digit==number[i]) idx.push_back(i);
        }
        int j=0;
        string s="";
        vector<string>ans;
        while(j<idx.size()){
            s="";
            for(int i=0;i<number.size();i++){
                if(idx[j]==i){
                    //ans.push_back(stoi(s));
                    continue;
                }
                s+=number[i];
            }
            ans.push_back(s);
            j++;
        }
        //for(auto i:ans) cout<<i<<" ";
        string answer=*max_element(ans.begin(),ans.end());
         return answer;
    }
};