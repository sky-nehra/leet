int missingNumber(int* nums, int numsSize) {
    int mr=0;
    for(int i=0;i<numsSize;i++){
        mr=mr^nums[i]^i;
    }

    return mr^numsSize;
    
}