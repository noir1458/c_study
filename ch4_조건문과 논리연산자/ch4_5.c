//check_number
#include <stdio.h>
int main(void) {

 int x;

 printf("숫자를 입력하시오\n");
 scanf("%d", &x);

 if ((x > 3) && (++x > 5)) //x는 3보다 크고, x+1은 5보다 크다
 {
  printf("x는 3보다 크고, x+1은 5보다 크다\n");
  printf("입력한 값은 %d", x);
 }
 else
 {
  printf("X\n");
  printf("입력한 값은 %d", x); //x가 3보다 같거나 작을경우 ++x실행하지 않음
 }

 return 0;
}

/*

if ((x > 3) && (++x > 5))
AND연산자의 경우, 여러개의 피연산자 중 처음 피연산자(x>3)의 값이 거짓이면 다른 피연산자(++x>5)들은 계산되지 않는다. 첫번째 피연산자의 값이 거짓이면 나머지 피연산자의 값은 계산하지 않아도 거짓이기 때문이다.

위 조건식에서 x>3이 거짓이면 두번째 피연산자 ++x>5는 계산되지 않는다.

단축계산(short circuit evaluation)은 수식의 계산을 빠르게 하기 위해 컴파일러에서 사용하는 기법이다.
*/