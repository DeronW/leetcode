#include <stdio.h>

int mySqrt(int x) {
    int t = 0;
    for(int i = 0; i <= x; i++) {
        long int prd = i * i;

        if(prd < 0){
            return t;
        } else if(prd < x) {
            t = i;
        } else if (prd == x){
            return i;
        } else {
            return t;
        }
    }
    return t;
}

int main(){
    int r = mySqrt(1);
    // int r = mySqrt(49);
    printf("%d\n", r);
}