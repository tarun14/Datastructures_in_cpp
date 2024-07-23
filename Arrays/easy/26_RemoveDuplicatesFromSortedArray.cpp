class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k=0,flag=101;

        for(int i=0;i<nums.size();i++){
            if(flag != nums[i]){
                flag = nums[i];
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
