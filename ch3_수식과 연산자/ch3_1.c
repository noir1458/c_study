//arithmetic
#include <stdio.h>
int main(void) {
 int x, y, result;
 double z, Fresult;


 printf("두개의 정수를 입력하시오.\n");
 scanf("%d %d", &x, &y);//두개의 정수를 동시에 입력받는다

 printf("두개의 실수를 입력하시오.\n");
 scanf("%lf", &z); //실수를 입력받는다
 //double형을 입력받으려면 %lf를 사용한다.

 result = x + y;//덧셈 연산을 해서 결과를 result에 대입한다
 printf("%d + %d = %d\n", x, y, result);

 result = x - y;
 printf("%d - %d = %d\n", x, y, result);

 result = x * y;
 printf("%d * %d = %d\n", x, y, result);

 result = x / y;
 printf("%d / %d = %d\n", x, y, result);
 result = x % y;
 printf("%d %% %d = %d\n", x, y, result);//%를 출력하려면 %%를 입력해야 한다.


 Fresult = x / z;
 printf("%d / %f = %f\n", x, z, Fresult);//실수 두개 연산
 //피연산자 중 하나가 실수이면 결과가 실수가 된다.
 return 0;
}

/*
컴퓨터에서 정수 연산과 실수 연산은 완전히 다르다
정수끼리의 연산은 정수 하드웨어를 사용하기 때문에 결과도 정수로 나오게 된다.
7/4는 1.75가 아니라 1이 되며, 소수점 이하는 버려진다.

피연산자 중 하나가 실수이면, 실수 하드웨어를 사용해서 계산하므로 결과가 실수가 된다
7.0을 4.0으로 나누면 1.75
*/