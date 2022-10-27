//symbolic constant(const)
#include <stdio.h>
int main(void) {
 int x;
 const int ABC = 30; //const로 선언된 변수는 딱 한번만 값을 저장할 수 있다.
 x = ABC;
 printf("%d",x);
 return 0;
}