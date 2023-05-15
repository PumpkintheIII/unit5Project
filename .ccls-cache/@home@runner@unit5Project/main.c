/*
  UB C Programming Unit 5 Project
  What Grade do I Need to get What?
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float q1, q2; //define variables as float
  char wantedSemester[5]; //define strign variable

  printf("Quarter 1 Grade: "); //ask user for input
  scanf("%f", &q1); //accept user input
  printf("Quarter 2 Grade: "); //ask user for input
  scanf("%f", &q2); //accept user input
  printf("Wanted Semester Grade: "); //ask user for input
  scanf("%s", wantedSemester); //accept user input

  printf("\nEntered Grades:"); //formatting
  printf("\nQuarter 1 Grade: %f", q1); //print q1 grade
  printf("\nQuarter 2 Grade: %f", q2); //print q2 grade
  printf("\nWanted Semester Grade: %s", wantedSemester);  //print wanted semester grade
  
  return 0;
}