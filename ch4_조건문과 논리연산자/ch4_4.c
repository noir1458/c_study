//condition
#include <stdio.h>
int main(void) {

 int x ,y;

 printf("서로다른 숫자 두개를 입력\n");
 scanf("%d", &x);
 scanf("%d", &y);


 printf("큰 수는 %d", (x > y) ? x : y);
 return 0;
}