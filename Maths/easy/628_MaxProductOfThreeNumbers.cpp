class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int max=INT_MIN;

        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int s=i+1;
            int e=nums.size()-1;

            while(s<e){
                //if(s==i)s++;

                if(a*nums[s]*nums[e]>max){
                    max = a*nums[s]*nums[e];
                    s++;
                    //e--;
                }else if(a*nums[s]*nums[e]<max) 
                    s++;
                else 
                    e--;
            }
        }

        return max;
    }
};
