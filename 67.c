#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *addBinary(char *a, char *b){
    int la = strlen(a);
    int lb = strlen(b);

    int lr = la > lb ? la : lb;

    char* r = (char *)malloc((lr + 2) * sizeof(char));
    
    char carry = 0;
    for(int i = lr; i > 0;i--){
        int ca = la > 0 ? a[--la] : '0';
        int cb = lb > 0 ? b[--lb] : '0';
        r[i] = ca + cb + carry;
        r[i] = r[i] == 96 || r[i] == 98 ? '0' : '1';
        carry = ca + cb + carry > 'a' ? 1 : 0;
    }
    r[0] = '1';
    r[lr+1] = '\0';
    return carry ? r : r + 1;
}

int main(){
    char* a = "0";
    char* b = "1";
    char* r = addBinary(a, b);

    while(*r != '\0'){
        printf("%c", *r);
        r++;
    }

    return 0;
}
