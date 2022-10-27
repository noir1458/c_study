//grade
#include <stdio.h>
int main(void) {

 int score;
 int grade;

 printf("성적을 입력하시오 : ");
 scanf("%d", &score);

 switch (score/10)
 {
 case 10:
 case 9:
  grade = 'A';
  break;
 case 8:
  grade = 'B';
  break;
 case 7:
  grade = 'C';
  break;
 case 6:
  grade = 'D';
  break;
 default:
  grade = 'F';
  break;
 }

 printf("학점 %c\n", grade);
 return 0;
}

/*
case 10은 break문을 사용하지 않아서 그 다음 case절의 문장을 실행하도록 했다.
case 10을 지우면 100점은 grade ='F'; 결과가 나오게 된다.
*/