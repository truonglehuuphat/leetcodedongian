class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> ans(rows,vector<int>(cols,0));
        int m = 0, n = 0;
        for(int i = 0; i < cols ; i++){
            n = 0;
            for(int j = rows - 1; j >=0 ;j--){
                ans[m][n++] = matrix[j][i];
            } 
            m++;
        }
        for(int i = 0; i < rows ; i++){
            for(int j = 0; j < cols ;j++){
                 matrix[i][j] = ans[i][j];
            }
        }

        // return ans;
    }
};