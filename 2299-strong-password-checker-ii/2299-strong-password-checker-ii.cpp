class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        int n=p.size();
        if(n<8) return false;
        char ch=p[0];
        for(int i=1;i<n;i++){
            if(ch==p[i]) return false;
            else {
                ch=p[i];
            }
        }
        
    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, specialChar = false;
    string normalChars = "abcdefghijklmnopqrstu"
        "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
 
    for (int i = 0; i < n; i++) {
        if (islower(p[i]))
            hasLower = true;
        if (isupper(p[i]))
            hasUpper = true;
        if (isdigit(p[i]))
            hasDigit = true;
 
        size_t special = p.find_first_not_of(normalChars);
        if (special != string::npos)
            specialChar = true;
    }
    if (hasLower && hasUpper && hasDigit &&
        specialChar && (n >= 8))
        return true;
    else
        return false;
    }
};