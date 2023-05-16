/*
  UB C Programming Unit 5 Project
  What Grade do I Need to get What?
  Max Gombos
*/
#include <stdio.h> //import input and output functions
#include <string.h> //import string function

float finalLowest(float q1, float q2, float lowest) {
  /*
    finalLowest function:
    The final lowest function determines the lowest grade you can get on your final and still recive the semester grade you desire.
    Variable Guide:
    - q1: Quarter 1 Grade
    - q2: Quarter 2 Grade
    - lowest: Lowest percent of the letter grade (eg.: B-, 80%)
    - finalGrade: Needed grade on the final
    Formula:
    - q1(0.4) + q2(0.4) + final(0.2) = lowest
    - (q1(0.4) + q2(0.4) - lowest) / -0.2 = final
  */
  float finalGrade;
  finalGrade = ((q1 * 0.4) + (q2 * 0.4) - lowest)/(-0.2);
  return finalGrade;
}
float finalHighest(float q1, float q2, float highest) {
  /*
    finalHighest function:
    The final highest function determines the highest grade you can get on your final and still recive the semester grade you desire.
    Variable Guide:
    - q1: Quarter 1 Grade
    - q2: Quarter 2 Grade
    - highest: Highest percent of the letter grade (eg.: B-, 82%)
    - finalGrade: Needed grade on the final
    Formula:
    - q1(0.4) + q2(0.4) + final(0.2) = highest
    - (q1(0.4) + q2(0.4) - highest) / -0.2 = final
  */
  float finalGrade;
  finalGrade = ((q1 * 0.4) + (q2 * 0.4) - highest)/(-0.2); 
  return finalGrade;
}

int main(void) { //define main function
  /*
    Variable Guide:
    - q1: User's Quarter 1 Grade
    - q2: User's Quarter 2 Grade
    - wantedSemester: Semester letter grade user desires
    - lowFinal: lowest final grade to get desired semester grade
    - highFinal: highest final grade to get desired semester grade
  */
  float q1, q2, lowFinal, highFinal; //define variables as float
  char wantedSemester[5]; //define string variable

  printf("This program will calculate the grade needed on your final in order to get a desired letter grade for a semester of your class. You will be given three prompts:\n\t- Quarter 1 Grade: Your quarter 1 grade (in percent)\n\t- Quarter 2 Grade: Your quarter 2 grade (in percent)\n\t- Semester Grade: Semester grade wanted by the user (letter grade)\n"); //instructions
  
  /*
    Get User Grades:
    Ask the user for their:
    - Quarter 1 Grade
    - Quarter 2 Grade
    - Wanted Semester Letter Grade
  */
  printf("Quarter 1 Grade: "); //ask user for input
  scanf("%f", &q1); //accept user input
  printf("Quarter 2 Grade: "); //ask user for input
  scanf("%f", &q2); //accept user input
  printf("Wanted Semester Grade: "); //ask user for input
  scanf("%s", wantedSemester); //accept user input
  
  /*
    Calculate Needed Final Grade:
    - Check user's desired letter grade
    - For user's desired letter grade, call finalLowest and finalHighest functions
    - Print the highest and lowest grades required for the final in order for the user to get the desired letter grade
  */
  if (strcasecmp(wantedSemester, "F") == 0) {
    //if user entered F as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 0); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 64); //find the highest grade on the final
    printf("\nTo receive an F this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "D") == 0) {
    //if user entered D as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 65); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 66); //find the highest grade on the final
    printf("\nTo receive a D this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "D+") == 0) {
    //if user entered D+ as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 67); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 69); //find the highest grade on the final
    printf("\nTo receive a D+ this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "C-") == 0) {
    //if user entered C- as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 70); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 72); //find the highest grade on the final
    printf("\nTo receive a C- this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "C") == 0) {
    //if user entered C as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 73); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 76); //find the highest grade on the final
    printf("\nTo receive a C this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "C+") == 0) {
    //if user entered C+ as wanted semester grade: 
    lowFinal = finalLowest(q1, q2, 77); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 79); //find the highest grade on the final
    printf("\nTo receive a C+ this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "B-") == 0) {
    //if user entered B- as wanted semester grade: 
    lowFinal = finalLowest(q1, q2, 80); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 82); //find the highest grade on the final
    printf("\nTo receive a B- this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "B") == 0) {
    //if user entered B as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 83); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 86); //find the highest grade on the final
    printf("\nTo receive a B this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "B+") == 0) {
    //if user entered B+ as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 87); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 89); //find the highest grade on the final
    printf("\nTo receive a B+ this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "A-") == 0) {
    //if user entered A- as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 90); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 92); //find the highest grade on the final
    printf("\nTo receive an A- this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "A") == 0) {
    //if user entered A as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 93); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 96); //find the highest grade on the final
    printf("\nTo receive an A this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else if (strcasecmp(wantedSemester, "A+") == 0) {
    //if user entered A+ as wanted semester grade:
    lowFinal = finalLowest(q1, q2, 97); //find the lowest grade on the final
    highFinal = finalHighest(q1, q2, 100); //find the highest grade on the final
    printf("\nTo receive an A+ this semester, you must score between %0.2f%% and %0.2f%% on the final.", lowFinal, highFinal); //print needed grade on final
  }
  else {
    //error checking: if the user did not enter a valid letter grade, tell them to.
    printf("\nPlease enter a valid letter grade! Valid letter grades include:\n\t- A+: 97%% to 100%%\n\t- A: 93%% to 96%%\n\t- A-: 90%% to 92%%\n\t- B+: 87%% to 89%%\n\t- B: 83%% to 86%%\n\t- B-: 80%% to 82%%\n\t- C+: 77%% to 79%%\n\t- C: 73%% to 76%%\n\t- C-: 70%% to 72%%\n\t- D+: 67%% to 69%%\n\t- D: 65%% to 66%%\n\t- F: 0%% to 64%%");
  }

  printf("\nProgram Complete!\n"); //output statement
  
  return 0;
}