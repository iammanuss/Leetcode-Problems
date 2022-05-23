class Solution {
public:
    
    int minimumLines(vector<vector<int>>& v) {
        if(v.size() == 1)
            return 0;
        sort(v.begin(), v.end());
        int ans = 1;
        int p = v[0][1] - v[1][1];
        int q = v[0][0] - v[1][0];
        int g = __gcd(p, q);
        p /= g, q /= g;
        for(int i = 2; i < v.size(); i++){
            int dx = v[i][1] - v[i - 1][1];
            int dy = v[i][0] - v[i - 1][0];
            int g = __gcd(dx, dy);
            dx /= g;
            dy /= g;
            if(dx != p || dy != q)
                ans++;
            p = dx, q = dy;
        }
        return ans;
    }
};