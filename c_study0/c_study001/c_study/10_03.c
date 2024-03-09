//형변환(캐스팅)
// (바꾸려는 형) 변수이름
// 영구적으로 바뀌는것이 아니고 계산식에서 일시적으로 int형 변수로 바꾼 후 생각하라는것
// 캐스팅후 float를 출력해보면 정상 출력된다
#include <stdio.h>
int main() {
	int a;
	double b;

	b = 2.4;
	a = (int)b;

	printf("%d", a);
}