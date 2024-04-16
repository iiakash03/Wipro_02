#include <stdio.h>

int main(){

    int slno, id, salary;
    char name[50], gender[10], phone[20], address[100];
    
    printf("========================================\n");
    printf("            Employee Details            \n");
    printf("========================================\n");

    printf("Enter SLNo: ");
    scanf("%d", &slno);

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Gender: ");
    scanf("%s", gender);

    printf("Enter Salary: ");
    scanf("%d", &salary);

    printf("Enter Phone: ");
    scanf("%s", phone);

    printf("Enter Address: ");
    scanf("%s", address);

    printf("========================================\n");
    printf("SLNo    ID    Name      Gender  Salary   Phone      Address\n");
    printf("----    ---   -------   ------  ---      ------     -------\n");
    printf("%-8d%-6d%-10s%-8s%-10d%-10s%s\n", slno, id, name, gender, salary, phone, address);

    return 0;
}
