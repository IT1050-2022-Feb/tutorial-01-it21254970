/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int i;
  float mark,sum=0,avg=0;
  for (i=0;i<2;i++)
    {
      printf("input mark %d:",i+1);
      scanf("%f",&mark);
      sum = sum + mark;
    }
  avg = sum/2.0;
  printf("Avarage is %.2f",avg);
  return 0;
} //end of the program

