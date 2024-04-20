#include <stdio.h>
#include <string.h>
#include "functions.h"

int main(int argc, char *argv[]) {
    
    char *input = argv[1];
    int len = strlen(input);
    
    // Check if input is empty
    if (len == 0) {
        printf("Input string is empty.\n");
        return 1;
    }
    
    char output[len * 2]; 

    process_input(input,output);

    printf("%s\n",output);

    return 0;

}