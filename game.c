//simple c program
/*
Name:Alfred koome
adm:Ct101/g/26551/25
Discription:simple game
*/
#include<stdio.h>
int main ()
{
int secretnumber;  
int number,attempts=0;  

    printf("Enter the secret number between 1 and 20:\n");  
    scanf("%d",&secretnumber);

printf("\nNow try to guess your number:\n");
do {
printf("enter your guess:\n");
scanf("%d",&number);
attempts ++;

if (number<secretnumber)  {
        printf("Too low!\n");
    }else if (number>secretnumber){
        printf("Too high!\n");
    }else {  
        printf("congratulations you have guessed it\n");  
         printf("Total attempts:%d\n",attempts);  
    }  
}  
while(number!=secretnumber);  
  
return 0;

}

