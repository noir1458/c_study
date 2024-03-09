//printf의 또 다른 형식
#include <stdio.h>
int main() {
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n", a);	
	//소수점 이하 2자리까지
	printf("c : %5d \n", c);	
	//숫자의 자리수를 되도록 5자리로 맞추기
	//만약 6자리 수라면? - 그냥 6자리로 출력
	printf("b : %6.3f \n", b);
	// 전체 자리수는 6자리로 맞추되, 반드시 소수점 이하 3째 자리까지
	return 0;
}