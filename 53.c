#include <stdio.h>

int maxSubArray(int* nums, int numsSize){
    int r = nums[0];
    int t = nums[0];    
    for(int i = 1; i < numsSize; i++){
        if(t < 0){
            if(nums[i] > t) t = nums[i];
        } else if(nums[i] > -t){
            t += nums[i];
        } else {
            t = 0;
        }
        if(t > r) r = t;

    }
    return r;
}

int main(){
    int nums[] = {-2, 1, -3, 4, -1, 2,1,-5,4};
    int numsSize = 9;
    int r = maxSubArray(nums, numsSize);
    printf("result: %d\n", r);
    return 0;
}
