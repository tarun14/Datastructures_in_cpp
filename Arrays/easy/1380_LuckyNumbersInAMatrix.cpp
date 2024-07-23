class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        vector <int> v;

        for(auto i=0; i<matrix.size();i++){
            int min = matrix[i][0];
            int min_j = 0;
            for(auto j=0; j<matrix[i].size(); j++){
                if(min>matrix[i][j]){
                    min = matrix[i][j];
                    min_j = j;
                }
            }

            bool check=true;
            for(auto k=0; k<matrix.size(); k++){
                if(min < matrix[k][min_j]){
                    check=false;
                }
            }

            if(check)
                v.push_back(min);
        }

        return v;
    }
};
