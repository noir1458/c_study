#include<stdio.h>
int main() {
 int i;
 for (i = 0; i < 10; i++){
  if (i % 2 == 1)
   continue;
  printf("%d", i);
 }
 return 0;
}

//예제에서 홀수일경우 다음 반복으로 넘어가고, 짝수일경우 출력하게 된다.
