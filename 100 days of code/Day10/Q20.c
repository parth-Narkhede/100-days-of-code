// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main(){
  int day;

  printf("enter a number from 1-7: ");
  scanf("%d", &day);

  switch(day){
    case 1: 
         printf("Monday\n");
         break;
   
    case 2:
         printf("Tuesday\n");
         break;

    case 3:
         printf("Wednesday\n");
         break;

    case 4:
         printf("Thursday");
         break;

    case 5: 
         printf("Friday");
         break;

    case 6:
         printf("Saturday");
         break;

    case 7:
         printf("Sunday");
         break;
         
    default: 
         printf("invalid input please enter a number from 1-7.");
  }
  return 0;
}