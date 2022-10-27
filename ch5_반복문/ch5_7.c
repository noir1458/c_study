#include<stdio.h>
int main() {
 int i, num;
 int sum = 0;

 for (i = 1; i <= 3; i++) {
  printf("숫자를 입력하시오 : ");
  scanf("%d",&num);

  if (num < 0)
  break;
  sum += num;
 }
 printf("합 : %d", sum);

 return 0;
}

//음수를 입력시 더하지 않고 for문을 종료한다. break문을 많이 사용할경우 코드가 난해하게 될 수 있다,
