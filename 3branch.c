/*
 Name:Alfred Koome
 Adm:ct101/g/26551/25
 discription:c program to display the number of occupied rooms in an hotel
 */

#include <stdio.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int occupied, vacant,totaloccupied=0;

    for (branch = 0; branch < 3; branch++) {
        printf("In branch %d\n ", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            printf("The occupacy of floor %d\n", floor + 1);
            for (room = 0; room < 10; room++) {
                printf("room %d:", room + 1);
                scanf("%d", &chain[branch][floor][room]);
            }
        }
    }
    for (branch = 0; branch < 3; branch++) {
        vacant = 0;
        occupied = 0;
        for (floor = 0; floor < 5; floor++) {
            vacant = 0;
            occupied = 0;
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }
            totaloccupied += occupied;
        }
    }


    printf("The total number of occupied rooms across all branches: %d", totaloccupied);


    return 0;
}
