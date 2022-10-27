//if_else
#include <stdio.h>
int main(void) {

 int x;

 printf("정수를 입력하시오 : ");
 scanf("%d", &x);

 if (x%2==0)   //2로 나눈 나머지가 0이면 짝수
  printf("짝수\n");  //조건이 참
 else
  printf("홀수\n");   //조건이 거짓

 return 0;
}

/*
예제에서

if(x%2==0)  //1번
 printf("짝수\n");
if(x%2==1)  //2번
 printf("홀수\n);

이렇게 작성시 항상 1,2 번 문장이 실행되므로 비효율적이다
*/