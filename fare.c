//simple programing
/*
Name:Alfred koome
adm:CT101/g/26551/25
Description:c program to calculate fare
*/

#include <stdio.h>
int calculateFare(int distanceTraveled)
{
    int fare = distanceTraveled * 50;
    return fare;
}

int main() {
    int distanceTraveled;
    printf("Please enter the distance traveled in kilometers:\n ");
    scanf("%d", &distanceTraveled);
    int fare = calculateFare(distanceTraveled);
    printf("Your fare is: %d", fare);
    return 0;
}
