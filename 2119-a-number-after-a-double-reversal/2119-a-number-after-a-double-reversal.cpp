class Solution {
public:
    bool isSameAfterReversals(int num) {
        string res="";
        res+=to_string(num);
        reverse(res.begin(),res.end());
        res.erase(0,min(res.find_first_not_of('0'),res.size()-1));
        reverse(res.begin(),res.end());
        
        if(res==to_string(num)) return true;
        else return false;
    }
};