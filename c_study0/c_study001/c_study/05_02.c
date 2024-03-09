#include <stdio.h>
int main() {
	double celsius; //섭씨 온도

	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
	printf("섭씨 온도를 입력해 주세요 : ");
	scanf("%lf", &celsius); // 섭씨 온도를 입력 받는다.
	//scanf 사용 위해서 SDL 검사 끄기

	printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);

	return 0;
}
//printf과 다르게 double 형을 입력받기 위해서 %lf 사용