//자료형의 크기를 알아보려면 sizeof연산자를 사용하면 된다.
//변수나 자료형의 크기를 바이트 단위로 반환한다
#include <stdio.h>
int main(void) {
 int x;
 printf("변수 x의 크기 : %d \n", sizeof(x)); //변수 x의 크기 : 4
 printf("char형의 크기 : %d \n", sizeof(char)); //char형의 크기 : 1
 printf("int형의 크기 : %d \n", sizeof(int)); //int형의 크기 : 4
 return 0;
}