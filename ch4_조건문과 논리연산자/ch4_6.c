//grade
#include <stdio.h>
int main(void) {

 int score;
 int grade;

 printf("성적을 입력하시오 : ");
 scanf("%d", &score);

 if (score >= 90)
  grade = 'A';
 else if (score >= 80)
  grade = 'B';
 else if (score >= 70)
  grade = 'C';
 else if (score >= 60)
  grade = 'd';
 else
  grade = 'f';

 printf("학점 %c\n", grade);
 return 0;
}

/*
조건을 score>80 && score<90 이렇게 할 필요가 없다.
위에서 아래로 순차적으로 진행된다.
*/