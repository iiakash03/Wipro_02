#include <stdio.h>
#include <string.h>
#include "functions.h"


void process_input(char *input, char *output){
    int len=strlen(input);


    int outputIndex=0;
    int count=1;
    for(int i=1;i<=len;i++){
        if(input[i]==input[i-1]){
            count++;
        }else{
            output[outputIndex++]=input[i-1];
            if(count>1){
                output[outputIndex++]=count+'0';
            }
            count=1;
        }
    }
    output[outputIndex]='\0';
}