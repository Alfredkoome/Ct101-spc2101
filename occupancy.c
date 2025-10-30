/*
Name:Alfred Koome
 Adm:ct101/g/26551/25
 discription:c program to display the number of occupied and vacant rooms in an hotel
 */

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    for (floor = 0; floor < 5; floor++) {
        printf("\nEnter 1 (occupied) or 0 (vacant) for Floor %d:\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("  Room %d: ", room + 1);
            scanf("%d", &occupancy[5][10]);

        }
    }

    printf("\n--- Summary of Each Floor ---\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d  Occupied: %d rooms, Vacant: %d rooms\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}
