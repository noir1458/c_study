//형변환
#include <stdio.h>
int main() {
	int a;
	double b;

	b = 2.4;
	a = b;

	printf("%d", a);
	return 0;
}

// double로부터 int로의 형 변환, 데이터의 손실이 예상됨 에러