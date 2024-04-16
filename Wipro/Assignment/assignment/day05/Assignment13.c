#include <stdio.h>

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        // this loop will create space

        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        // this will write characters increasingly
        for(int j=0;j<=i;j++){
            printf("%c",'A'+j);
        }
        // this will write characters decreasingly

        for(int j=i-1;j>=0;j--){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;


}