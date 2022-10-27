#include<stdio.h>
int main() {
 int i;

 for (i = 0; i < 100; i = i + 10){
  printf("a");
 }
 return 0;
}

/*
i++, i-- 대신 예제와 같이 증감값도 입력 가능하다. i++는 i=i+1 이다, 필요하면 바꿀수 있다.
 - 반복되는 문장이 2줄 이상이면 중괄호로 묶는다.
*/