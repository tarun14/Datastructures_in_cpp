int compare(const void *a, const void *b)
{
    int *l = (int*)a;
    int *r = (int*)b;

    return (*l - *r);
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(nums[0]),compare);

    int flag=0;
    for(int i=0;i<numsSize;i++){
        if(i==0);
        else if(nums[i]==nums[i-1]){
            flag = 1;
            break;
        }else;
    }

    if(flag){
        return true;
    }else{
        return false;
    }
}
