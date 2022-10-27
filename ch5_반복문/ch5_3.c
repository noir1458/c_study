#include<stdio.h>
int main() {
 int i = 0;
 do {
  printf("1~10안에서 숫자를 입력");
  scanf("%d", &i);
 } while (i < 1 || i>10);
 printf("입력한 숫자=%d", i);

 return 0;
}

//숫자가 범위를 벗어날경우 반복되도록 했다.
