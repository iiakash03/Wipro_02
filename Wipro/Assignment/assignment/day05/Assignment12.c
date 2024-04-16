#include <stdio.h>

int main(){
    int n;
    int count=1;
    int i=1;
    printf("Enter a number");
    scanf("%d",&n);

    while(i<=n*n){
        printf("%d",i);
        
        if(i%5==0){
            printf("\n");
        }else{
            printf("*");
        }
        i++;
    }
    return 0;
}