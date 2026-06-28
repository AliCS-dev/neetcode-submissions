class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = (rows * col) - 1;
        while(low <= high){
            int middle = low + (high - low)/2;
            int mid_val = matrix[middle/col][middle % col];
            if(target == mid_val){
                return true;
            }
            else if(target > mid_val){
                low = middle + 1;
            }
            else{
                high = middle - 1;
            }
        }
    return false;
    }
};
