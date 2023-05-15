/*
  UB C Programming Unit 5 Project
  What Grade do I Need to get What?
  Max Gombos
*/
#include <stdio.h> //import input and output functions
#include <string.h> //import string function

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

  printf("\n\nWanted Semester Grade:"); //formatting
  if (strcasecmp(wantedSemester, "F") == 0) {
    //if user entered F as wanted semester grade:
    printf("\nWanted Semester Grade is an F!"); //print wanted semester grade
    printf("\n0-64"); //percent 
  }
  else if (strcasecmp(wantedSemester, "D") == 0) {
    //if user entered D as wanted semester grade:
    printf("\nWanted Semester Grade is an D!"); //print wanted semester grade
    printf("\n65-66"); //percent 
  }
  else if (strcasecmp(wantedSemester, "D+") == 0) {
    //if user entered D+ as wanted semester grade:
    printf("\nWanted Semester Grade is an D+!"); //print wanted semester grade
    printf("\n67-69"); //percent 
  }
  else if (strcasecmp(wantedSemester, "C-") == 0) {
    //if user entered C- as wanted semester grade:
    printf("\nWanted Semester Grade is an C-!"); //print wanted semester grade
    printf("\n70-72"); //percent 
  }
  else if (strcasecmp(wantedSemester, "C") == 0) {
    //if user entered C as wanted semester grade:
    printf("\nWanted Semester Grade is an C!"); //print wanted semester grade
    printf("\n73-76"); //percent 
  }
  else if (strcasecmp(wantedSemester, "C+") == 0) {
    //if user entered C+ as wanted semester grade:
    printf("\nWanted Semester Grade is an C+!"); //print wanted semester grade
    printf("\n77-79"); //percent 
  }
  else if (strcasecmp(wantedSemester, "B-") == 0) {
    //if user entered B- as wanted semester grade:
    printf("\nWanted Semester Grade is an B-!"); //print wanted semester grade
    printf("\n80-82"); //percent 
  }
  else if (strcasecmp(wantedSemester, "B") == 0) {
    //if user entered B as wanted semester grade:
    printf("\nWanted Semester Grade is an B!"); //print wanted semester grade
    printf("\n83-86"); //percent 
  }
  else if (strcasecmp(wantedSemester, "B+") == 0) {
    //if user entered B+ as wanted semester grade:
    printf("\nWanted Semester Grade is an B+!"); //print wanted semester grade
    printf("\n87-89"); //percent 
  }
  else if (strcasecmp(wantedSemester, "A-") == 0) {
    //if user entered A- as wanted semester grade:
    printf("\nWanted Semester Grade is an A-!"); //print wanted semester grade
    printf("\n90-92"); //percent 
  }
  else if (strcasecmp(wantedSemester, "A") == 0) {
    //if user entered A as wanted semester grade:
    printf("\nWanted Semester Grade is an A!"); //print wanted semester grade
    printf("\n93-96"); //percent 
  }
  else if (strcasecmp(wantedSemester, "A+") == 0) {
    //if user entered A+ as wanted semester grade:
    printf("\nWanted Semester Grade is an A+!"); //print wanted semester grade
    printf("\n97-100"); //percent 
  }
  
  return 0;
}