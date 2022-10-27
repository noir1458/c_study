//if_else
#include <stdio.h>
int main(void) {

 int t;

 printf("온도를 입력하시오 : ");
 scanf("%d", &t);

 if (t > 0)
  printf("영상\n");  //조건이 참
 else
  printf("영하\n");   //조건이 거짓

  printf("현재 온도는 %d도.\n", t);  //if-else밖에 있으므로 그냥 실행

 return 0;
}