//simple programing 
/*
Name:Alfred koome
adm:CT101/g/26551/25
Dispription:to check if stident is eligible for the exam
*/

#include<stdio.h>
int main(){
int attendance,average_marks;
printf("ENTER CLASS ATTENDANCE IN PERCENTAGE:\n");
  scanf("%d",&attendance);
  
printf("ENTER AVERAGE MARKS:\n");
  scanf("%d",&average_marks);
  
  if(attendance >=70 &average_marks>=40){
  printf("ELIGIBLE:\n");}
  else {printf("NOT ELIGIBLE");}
  
  return 0;
}