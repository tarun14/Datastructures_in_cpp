void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0,j=0,k=0;
    
    int nums3[m+n];

    while(k<m+n){
        if(i>=m){
            nums3[k] = nums2[j];
            j++;
        }else if(j>=n){
            nums3[k] = nums1[i];
            i++;
        }else if(nums1[i]<nums2[j]){
            nums3[k] = nums1[i];
            i++;
        }else if(nums1[i]>nums2[j]){
            nums3[k] = nums2[j];
            j++;
        }else if(nums1[i]==nums2[j]){
            nums3[k] = nums1[i];
            i++;
            k++;
            nums3[k] = nums2[j];
            j++;
        }else;

        k++;
    }

    memcpy(nums1,nums3,(n+m)*sizeof(int));
}
