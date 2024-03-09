//논리합과 논리부정
#include <stdio.h>
int main() {
	int height, weight;
	printf("당신의 키와 몸무게를 각각 입력해 주세요 : ");
	scanf("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("당신은 '거구' 입니다.\n");
	}
	if (!(height >= 190 || weight >= 100)) {
		printf("당신은 거구가 아닙니다. \n");
	}
	return 0;
}
// ! 연산자는 0이 아닌값은 0으로 변환해준다는 특성이 있다.
// if(!p) // p == 0과 같은 의미가 된다. 0일때만 실행