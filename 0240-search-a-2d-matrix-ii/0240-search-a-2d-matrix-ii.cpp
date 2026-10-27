class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int stRow = 0, stCol = matrix[0].size()-1;
        while(stRow < matrix.size() && stCol >=0){
            if(target == matrix[stRow][stCol]) return true;
            else if(target < matrix[stRow][stCol]) stCol--;
            else stRow++;
        }
        return false;
    }
};