int removeElement(int* nums, int numsSize, int val) {
    int *nums2 = (int*)calloc(numsSize,sizeof(int));

    int j=0,count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums2[j] = nums[i];
            j++;
            count++;
        }
    }

    memcpy(nums,nums2,numsSize*sizeof(int));

    return count;
}
