#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n){

    if(n == 0) return 0;
    if(n == 1) return 1;

    int *r = (int *)malloc(n * sizeof(int));
    *r = 1;
    r++;
    *r = 2;
    r++;

    for(int i = 3; i <= n; i++){
        *r = *(r - 1) + *(r - 2);
        r++;
    }
    return *(r-1);
}

int main(){
    int r = climbStairs(12);
    printf("%d\n", r);

    return 0;
}
