class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0;
        int right = rows-1;
        int row = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(matrix[mid][0] <= target && matrix[mid][cols-1] >= target){
                row = mid;
                break;
            }
            if(target < matrix[mid][cols-1]) right = mid-1;
            if(target > matrix[mid][cols-1]) left = mid+1;
        }
        if(row == -1) return false;
        int l = 0; int r = cols-1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(matrix[row][mid] == target) return true;
            if(target < matrix[row][mid]) r = mid-1;
            if(target > matrix[row][mid]) l = mid+1;
        }
        return false;
    }
};
