//simple c program
/*
 Name:ALFRED KOOME
 Reg:ct101/g/26551/25
 Description:c function to calculate electric bill
 */

#include<stdio.h>

int calculateElectricBill(int unit) {
    int totalBill;


    if (unit <= 100) {
        totalBill = unit * 10;
    } else if (unit <= 200) {
        totalBill = (100 * 10) + (unit - 100) * 15;
    } else {
        totalBill = (100 * 10) + (100 * 15) + (unit - 200) * 20;
    }
    return totalBill;
}

int main() {
    int unit;
    printf("Enter number of unit consumed:");
    scanf("%d", &unit);

    int totalBill = calculateElectricBill(unit);
    printf("Total Bill = %d", totalBill);
    return 0;
}

