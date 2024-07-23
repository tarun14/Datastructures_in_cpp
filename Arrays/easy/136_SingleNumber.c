int compare(const void *a, const void *b)
{
    int *l = (int*)a;
    int *r = (int*)b;

    return (*l - *r);
}
int singleNumber(int* nums, int numsSize) {

    qsort(nums,numsSize,sizeof(int),compare);

   //printf("nums[0]: %d nums[1]:%d nums[2]:%d",nums[0],nums[1],nums[2]);

    int i=0,single=0,flag=0;

    for(i=1;i<numsSize; i = i+2){
        if(nums[i]!=nums[i-1]){
            single = nums[i-1];
            flag=1;
            break;
        }
    }

    if(flag==0){
        return (nums[i-1]);
    }else{
        return single;
    }
}
