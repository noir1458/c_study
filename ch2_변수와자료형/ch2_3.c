//정수형 상수의 진법변환
#include <stdio.h>
int main(void) {
 int x;
 printf("10진법 숫자를 입력하세요 :");
 scanf("%d", &x);
 printf("%d %#x %#o",x,x,x); //%#x , %#o는 각각 16진수 8진수로 출력하는 형식지정자
 return 0;
}