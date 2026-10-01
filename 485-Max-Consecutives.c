int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int j=0,max=0;
    for(int i=0;i<numsSize;i++){
        
        if(nums[i]==1){
            j=j+1;
            if(max<j){
                max=j;
            }
        }
        else{
            j=0;
        }
    }
    return max;
}