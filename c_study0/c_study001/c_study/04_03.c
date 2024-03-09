// 산술 변환
#include <stdio.h>
int main() {
	int a;
	double b;
	a = 10;
	b = 3;
	printf("a / b 는 : %f \n", a / b);
	printf("b / a 는 : %f \n", b / a);
	return 0;
}
//자료형이 다른 두 변수를 연산할때,
//숫자의 범위가 큰 자료형으로 자료형들이 바뀐다. 정상적인 결과가 나오게 된다.
//결과가 double 이므로 %f이 아닌 %d로 출력시 오류