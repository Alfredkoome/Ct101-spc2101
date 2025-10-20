//simple c program
/*
 Name:ALFRED KOOME
 Reg:ct101/g/26551/25
 Description:c function to calculate electric bill
 */

#include<stdio.h>

int calculateElectricBill(void);

int main() {
    int totalBill = calculateElectricBill();
    printf("Total Bill = %d", totalBill);
    return 0;
}

int calculateElectricBill() {
    int unit, totalBill;

    printf("Enter number of unit consumed:");
    scanf("%d", &unit);

    if (unit <= 100) {
        totalBill = unit * 10;
    } else if (unit <= 200) {
        totalBill = (100 * 10) + (unit - 100) * 15;
    } else {
        totalBill = (100 * 10) + (100 * 15) + (unit - 200) * 20;
    }
    return totalBill;
}

