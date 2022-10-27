#include <stdio.h>
#define SIZE 5

int main() {
 int i;
 int scores[SIZE];

 scores[0] = 10;
 scores[1] = 20;
 scores[2] = 30;
 scores[3] = 40;
 scores[4] = 50;

 for (i = 0; i < SIZE; i++)
 {
  printf("scores[%d] = %d\n", i, scores[i]);
 }

 return 0;
}

//문자형 배열도 선언 가능하며, 각 요소를 더해서 평균을 구하는 등의 연산도 가능하다. for문을 활용하면 된다.
