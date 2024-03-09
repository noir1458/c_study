//scanf 총 정리
#include <stdio.h>
int main() {
	char ch;

	short sh;
	int i;
	long lo;

	float fl;
	double du;

	printf("char 형 변수 입력 : ");
	scanf("%c", &ch);
	// 한글은 2바이트 이상을 차지하므로 입력시 버퍼 오버플로우 발생 (허용된 메모리 이상의 데이터 입력시)

	printf("short 형 변수 입력 : ");
	scanf("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf("%lf", &du);

	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %ld , float : %f ,double : %f \n", lo, fl, du);
	return 0;
}