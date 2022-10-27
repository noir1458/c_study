//overflow
#include <stdio.h>
int main(void) {
 short a = 32767; //최대값으로 초기화한다;

 a = a + 1;
 printf("a = %d", a);
 return 0;
}



/*short형의 변수에 최대값인 32767을 저장한 후 1을 증가시키면 갑자기 -32768이 된다.
변수가 나타낼수 있는 범위를 넘는 숫자를 저장하려고 할 경우 발생한다.*/