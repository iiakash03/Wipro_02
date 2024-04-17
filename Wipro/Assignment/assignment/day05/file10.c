/*Problem
statement: Write the logic to print right triangle star pattern.
Input
Format  : First line contains N of type
integer.
Output
Format : Print the right triangle star pattern.
Constrains:
2<=N<=10
Sample Input:
5
Sample Output:
*
**
***
****
*****
    */


#include <stdio.h>

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
