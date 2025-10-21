//simple programin
/*
Name:Alfred koome
adm:CT101/g/26551/25
Description:c program to change fahrenheit to celsious
*/

#include<stdio.h>

int convertToCelsius(int f) {
    int c;
    c = (f - 32) * 5 / 9;
    return c;
}

int main() {
    int f;
    printf("enter temperature in fahrenheit\n");
    scanf("%d", &f);
    int c = convertToCelsius(f);
    printf("temperature into celsius: %d", c);
    return 0;
}
