#include <stdio.h>

int main(){

    int lastEle=64;

    int i=1;
    printf("%d",i);
    printf(",");

    while(i<lastEle){
        i=2*i;
        printf("%d",i);
        if(i<lastEle){
            printf(",");
        }
        
    }
    return 0;
}