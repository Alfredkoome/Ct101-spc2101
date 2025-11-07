/*
Name:Alfred Koome
Adm:ct101/G/26551/25
discription:a simple c program for a small retail shop
 */

#include <stdio.h>
int main() {
    FILE *fptr;
    float amount, total = 0.0;
    fptr = fopen("C:\\Users\\USER\\OneDrive\\Documents\\Ct101-spc2101.sales.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file 'sales.txt'.\n");
        return 1;
    }
    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }
    fclose(fptr);
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}

