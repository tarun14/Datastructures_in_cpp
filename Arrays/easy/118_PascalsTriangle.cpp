class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>vec;
        int temp=0;

        for(int i=0;i<numRows; i++){
            vector<int>v;

            for(int j=0; j<i+1; j++){
                if((j==0)||(j==i)){
                    v.push_back(1);
                }else{
                    temp = vec[i-1][j-1] + vec[i-1][j];
                    v.push_back(temp);
                }
            }
            vec.push_back(v);
        }
        return vec;
    }
};
