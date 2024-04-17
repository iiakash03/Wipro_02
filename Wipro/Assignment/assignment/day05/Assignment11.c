/*Write the logic to print right triangle star pattern.
Input Format  : First line contains N of type integer.
Output Format : Print the right triangle star pattern.
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
****                                                                   
***                                                                  
**                                                                    
*   
*/

#include <stdio.h>

int main(){
    int n;

    printf("Enter the number");
    scanf("%d",&n);

    // for the first triangle

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }

    // for the inverted trianglr

    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
