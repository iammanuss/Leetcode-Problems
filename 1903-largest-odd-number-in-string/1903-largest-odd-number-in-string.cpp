class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        while(num.size()!=0){
            if(num.back()=='0' || num.back()=='2' || num.back()=='4' || num.back()=='6' || num.back()=='8'){
                num.pop_back();
            }else{
                return num;
            }
        }
        return ans;
    }
};