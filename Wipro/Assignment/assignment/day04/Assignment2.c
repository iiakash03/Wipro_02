/*write a c program that will display the multiplication table of any number that the user enters.*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter input ");
    scanf("%d",&num);

    for(int i=1;i<11;i++){

        printf("%d * %d = %d\n",num,i,num*i);

    }
}
