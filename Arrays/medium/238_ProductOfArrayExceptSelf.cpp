class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>v;

        int product=1;
        int zero_count = count(nums.begin(),nums.end(),0);

        if(zero_count>1) return(vector<int>(nums.size()));

        for(auto c:nums){
            if(c) product *= c;
        }

        else if(zero_count==1){
            int i=0;
            while(i<nums.size()){
                if(nums[i]!=0){
                    product = product * nums[i];
                }
                i++;
            }

            for(int j=0;j<nums.size();j++){
                if(nums[j]!=0){
                    v.push_back(0);
                }else{
                    v.push_back(product);
                    product = 1;
                }
            }
        }else{
            int i=0;
            while(i<nums.size()){
                product = product * nums[i];
                i++;
            }
            for(int i=0; i<nums.size(); i++){
                v.push_back(product/nums[i]);
            }
        }

        return v;
        
    }
};
