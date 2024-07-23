class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size(), total = m*n;

        if(r*c != total){
            return mat;
        }
        vector<vector<int>> new_mat(r,vector<int>(c));

        for(auto i=0; i<total; i++){
            new_mat[i/c][i%c] = mat[i/n][i%n];
        }
        return new_mat;
    }
};
