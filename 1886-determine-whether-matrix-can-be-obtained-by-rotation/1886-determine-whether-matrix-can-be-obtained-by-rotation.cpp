class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int rows = mat.size();
        int cols = mat[0].size();
        for(int k = 0 ; k < 4; k++){
            for(int i = 0 ; i < rows ;i++){
                for(int j = i + 1 ; j< rows;j++){
                    swap(mat[i][j], mat[j][i]);
                }
            }
            for(int i = 0 ; i < rows;i++){
                reverse(mat[i].begin(), mat[i].end());
            }
            if(mat == target) return true;
        }

        return false;
    }
};