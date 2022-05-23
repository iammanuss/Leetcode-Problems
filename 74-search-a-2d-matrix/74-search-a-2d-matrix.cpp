class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=matrix.size();
        int m=matrix[0].size();
        int l = 0, r = matrix.size()-1, res = 0;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(matrix[mid][0] <= target){
                res = mid;
                l = mid+1;
            }else r = mid-1;
        }
        l = 0, r=matrix[res].size()-1;
        while(l <=r ){
            int mid = l + (r-l)/2;
            if(matrix[res][mid] == target)
              return true;
            if(matrix[res][mid] < target)
                l = mid+1;
            else r = mid-1;
        }
        return false; 
    }
};