//simple programing 
/*
Name:Alfred koome
adm no:ct101/g/26551/25
*/

#include<stdio.h>

int main(){
 #define pi 3.14159 // difine the value of pi
   
float radius,volume,height;

    printf("enter the radius");//input from user
    scanf("%f",& radius);
    
    printf("enter the height");// input from user 
    scanf("%f",& height);
    
    //formula for volume of a cylinder: πr×r×h
    volume = pi *radius *radius*height;
    //display results 
    printf("volume of a cylinder is:2f%\n",volume);
    
    return 0;
    }
