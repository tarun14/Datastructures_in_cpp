class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e = nums.size()-1;

        if(nums.size()==1){
            if(nums[0]==target)
                return 0;
            else
                return -1;
        }
        
        while(s<=e){
            int mid = ((e-s)/2)+s;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target)e=mid-1;
            else s=mid+1;
        }

        return -1;
        
    }
};
