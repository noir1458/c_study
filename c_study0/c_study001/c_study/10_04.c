//두 수의 비율
#include <stdio.h>
int main() {
	int a, b;
	float c, d;

	printf("두 숫자 입력 : ");
	scanf("%d %d",&a,&b);

	c = a / b;
	d = (float)a / b;

	printf("두 수의 비율 : %f %f",c, d);

	return 0;
}

//형변환을 해주지 않으면 나눗셈의 결과는 몫이 된다.
//형변환은 float 변수에서 정수부분만 추출할떄 사용할수도 있다 (int)