#include <stdio.h>

int main() {
    int size = 6;
    int currentTerm = 3;
    int sum = 0;

    printf("Series: ");
    for (int i = 0; i < size; i++) {
        printf("%d", currentTerm);
        sum += currentTerm;
        if(i<size-1){
            printf("+");
        }
        currentTerm = currentTerm * 10 + 3;
    }
    printf("\n");

    printf("Sum: %d\n", sum);

    return 0;
}
