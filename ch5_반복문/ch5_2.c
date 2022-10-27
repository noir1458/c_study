#include<stdio.h>

int main(void)
{
 int i = 0;
 while (i < 10) {
  printf("A%d ",i);
  i++;
 }
 return 0;
}

//반복문 안에서 i를 출력시켜보면, i가 0부터 시작해서 10이 되면 출력되지 않는것을 확인할 수 있다.
