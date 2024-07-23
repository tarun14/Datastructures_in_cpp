class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int a=0,b=nums.size()-1;
        vector<int>v(nums.size());

        for(int pos=nums.size()-1; pos>=0; pos--){
            if(abs(nums[a]) > abs(nums[b]))
                v[pos] = nums[a]*nums[a++];
            else
                v[pos] = nums[b]*nums[b--];
        }

        return v;
    }
};
