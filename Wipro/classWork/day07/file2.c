#include <stdio.h>

int main(){
    int first;
    int second;
    char op;
    printf("Please Enter the first number");
    scanf("%d",&first);
    printf("Enter the operator +,-,*,/");
    scanf(" %c",&op);
    printf("Please Enter the second number");
    scanf("%d",&second);

    switch(op){
        case '+' :
        printf("Addition is %.2f", Add(first,second));
        break;
        case '-':
        printf("Addition is %.2f", Subtract(first,second));
        break;
        case '*':
        printf("Addition is %.2f", Multiply(first,second));
        break;
        case '/':
        printf("Addition is %.2f", Divide(first,second));
        break;
        default:
        printf("invalid operation");
    }


}

float Add(float num1,float num2){
    return num1+num2;
}

float Subtract(float num1,float num2){
    return num1-num2;
}

float Multiply(float num1,float num2){
    return num1*num2;
}

float Divide(float num1,float num2){

    if(num2==0){
        printf("Error");
    }

    return num1/num2;

}
