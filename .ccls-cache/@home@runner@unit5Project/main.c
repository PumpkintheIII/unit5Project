/*
  UB C Programming Unit 5 Project
  What Grade do I Need to get What?
  Max Gombos
*/
#include <stdio.h> //import input and output functions
#include <string.h> //import string function

float finalLowest(float q1, float q2, float lowest) { //define finalLowest function
  float finalGrade; //define variable
  finalGrade = ((q1 * 0.4) + (q2 * 0.4) - lowest)/(-0.2); //find the grade needed on the final to get the wanted semester grade
  return finalGrade;
}
float finalHighest(float q1, float q2, float highest) { //define finalLowest function
  float finalGrade; //define variable
  finalGrade = ((q1 * 0.4) + (q2 * 0.4) - highest)/(-0.2); //find the grade needed on the final to get the wanted semester grade
  return finalGrade;
}

int main(void) { //define main function
  float q1, q2, lowFinal, highFinal; //define variables as float
  char wantedSemester[5]; //define strign variable

  printf("Quarter 1 Grade: "); //ask user for input
  scanf("%f", &q1); //accept user input
  printf("Quarter 2 Grade: "); //ask user for input
  scanf("%f", &q2); //accept user input
  printf("Wanted Semester Grade: "); //ask user for input
  scanf("%s", wantedSemester); //accept user input

  printf("\nWanted Semester Grade:"); //formatting
  if (strcasecmp(wantedSemester, "F") == 0) {
    //if user entered F as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 0); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 64); //find the highest grade on the final
    printf("\nTo get an F this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "D") == 0) {
    //if user entered D as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 65); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 66); //find the highest grade on the final
    printf("\nTo get a D this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "D+") == 0) {
    //if user entered D+ as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 67); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 69); //find the highest grade on the final
    printf("\nTo get a D+ this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "C-") == 0) {
    //if user entered C- as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 70); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 72); //find the highest grade on the final
    printf("\nTo get a C- this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "C") == 0) {
    //if user entered C as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 73); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 76); //find the highest grade on the final
    printf("\nTo get a C this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "C+") == 0) {
    //if user entered C+ as wanted semester grade: 
    lowFinal = finalLowest(q1, q2, 77); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 79); //find the highest grade on the final
    printf("\nTo get a C+ this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "B-") == 0) {
    //if user entered B- as wanted semester grade: 
    lowFinal = finalLowest(q1, q2, 80); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 82); //find the highest grade on the final
    printf("\nTo get a B- this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "B") == 0) {
    //if user entered B as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 83); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 86); //find the highest grade on the final
    printf("\nTo get a B this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "B+") == 0) {
    //if user entered B+ as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 87); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 89); //find the highest grade on the final
    printf("\nTo get a B+ this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "A-") == 0) {
    //if user entered A- as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 90); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 92); //find the highest grade on the final
    printf("\nTo get a A- this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "A") == 0) {
    //if user entered A as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 83); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 86); //find the highest grade on the final
    printf("\nTo get a A this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "A+") == 0) {
    //if user entered A+ as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 97); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 100); //find the highest grade on the final
    printf("\nTo get a A+ this semester you must get between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }

  printf("\nProgram Complete!\n"); //output statement
  
  return 0;
}