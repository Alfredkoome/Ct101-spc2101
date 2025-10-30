/*
Name:Alfred Koome
 Adm:ct101/g/26551/25
 discription:c program to display the revenue of a hotel
 */

#include<stdio.h>
int main () {
    float revenue[7];
    int i;
    float total=0,average;
    printf("REVENUE FOR EACH DAY\n");

    for (i=0;i<7;i++) {
        printf("Days:%d\n",i+1);
        scanf("%f",&revenue[i]);
        total=total+revenue[i];
    }
    average=(total/7);

    printf("Total weekly revenue is:%.2f\n",total);
    printf("Average weekly revenue is:%.2f\n",average);

    return 0;
}