class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size(); i++){
            
            int a = nums[i];
            int remaining = -a;
            int s=i+1;
            int e=nums.size()-1;

            
            while(s<e){
                if(nums[s]+nums[e]==remaining){
                    ans.push_back({a,nums[s],nums[e]});
                    while((s<e)&&(nums[s+1]==nums[s]))s++;
                    while((e>s)&&(nums[e-1]==nums[e]))e--;
                    s++;
                    e--;
                }else if(nums[s]+nums[e]<remaining){
                    s++;
                }else{
                    e--;
                }
            }

            while((i+1<nums.size())&&(nums[i+1]==nums[i]))i++;
        }
        return ans;
        
    }
};
