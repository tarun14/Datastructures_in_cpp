class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int>m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto a:m){
            if(a.second > nums.size()/2)
                return a.first;
        }

        return {0};
    }
};
