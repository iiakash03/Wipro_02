/*Q1. Print series 0,3,8,15,24,35,48,63,80,99 given n = 10*/

#include <stdio.h>

int main() {
    int num = 10;
    int term;
    
    printf("Series:\n");

    for (int i = 1; i <= num; i++) {
        term = i * i - 1;
        printf("%d", term);
        if(i<num){
            printf(",");
        }
    }
    
    return 0;
}
