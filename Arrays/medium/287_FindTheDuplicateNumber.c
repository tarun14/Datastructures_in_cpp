int compare(const void *a, const void *b)
{
    int *l = (int*)a;
    int *r = (int*)b;

    return (*l - *r);
}

int findDuplicate(int* nums, int numsSize) {
    int i=0;
    qsort(nums,numsSize, sizeof(nums[0]), compare);
    for(i=1; i<numsSize; i++){
       if(nums[i]==nums[i-1]){
           break;
       }
    }

    return nums[i];
    
}
