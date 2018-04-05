#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize) {
    if (digits == NULL) {
        return NULL;
    }

    int n = digitsSize-1;

    while(n >= 0) {
        if(digits[n] < 9) {
            digits[n]++;
            break;
        }else {
            digits[n] = 0;
            n--;
        }
    }

    if(n >= 0){
        *returnSize = digitsSize;
        return digits;
    } else {
        *returnSize = digitsSize + 1;

        int *newDigits = (int *)malloc(*returnSize * sizeof(int));
        for(int i = 1;i<*returnSize; i++){
            newDigits[i] = 0;
        }
        newDigits[0] = 1;
        return newDigits;
    }
}

int main(){
    int digits[] = {9};
    int t = 0;
    int *rsize = &t;
    int *result = plusOne(digits, 1, rsize);

    printf("return size: %d\n", *rsize);
    printf("new digits is:");
    for(int i = 0; i < *rsize; i++){
        printf(" %d", *result);
        result++;
    }

    
    return 0;
}
