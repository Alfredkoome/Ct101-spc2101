/*
Name:Alfred Koome
 Adm:ct101/G/26551/25
 discription:a simple c program to store student examination results
 */
#include<stdio.h>
int main() {
    FILE *fptr;
    int marks, registration_number;
    char name[50];
    fptr = fopen("C:\\Users\\USER\\OneDrive\\Documents\\Ct101-spc2101.results.dat", "a");
    if (fptr == NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Enter The Students Name:\n ");
    scanf("%49s", name);

    printf("Enter The Students Registration Number:\n");
    scanf("%d", &registration_number);

    printf("Enter The Students Score:\n");
    scanf("%d", &marks);

    fprintf(fptr, "The Name Of The Student Is:%s\n", name);
    fprintf(fptr, "The Registration Number Of The Student IS:%d\n", registration_number);
    fprintf(fptr, "The Marks Of The Student IS:%d\n", marks);
    fclose(fptr);

    printf("the results as been displayed in the file");

    return 0;
}

