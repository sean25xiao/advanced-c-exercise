#include <stdio.h>

union Grade {
  char  letterGrade;
  int   roundedGrade;
  float exactGrade;
};

int main() {
  union Grade student_1;
  union Grade student_2;

  student_1.letterGrade = 'A';
  printf("student_1's letterGrade = %c \n", student_1.letterGrade);
  printf("student_1's roundedGrade = %d \n", student_1.roundedGrade);
  printf("student_1's exactGrade = %f \n", student_1.exactGrade);

  student_2.letterGrade = 'B';
  printf("student_2's letterGrade = %c \n", student_2.letterGrade);
  student_2.roundedGrade = 95;
  printf("student_2's roundedGrade = %d \n", student_2.roundedGrade);
  student_2.exactGrade = 94.65;
  printf("student_2's exactGrade = %f \n", student_2.exactGrade);

  printf("Hello This is Sec12 Exercise \n");

  return 0;
}