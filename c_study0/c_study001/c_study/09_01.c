//switch문
//switch 문은 정수 데이터만 처리한다.
//참고로 case에 '알파벳'이 들어가도 판별 가능하다
//왜?? - 컴퓨터는 숫자와 문자르 구분하지 못하니까

#include <stdio.h>
int main() {
	int input;
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");

	scanf("%d", &input);

	switch (input)
	{
		case 1:
			printf("맛잇어\n");
			break;
		case 2:
			printf("시원해\n");
			break;
		case 3:
			printf("zzz\n");
			break;
		default:
			printf("못알아듣겠어\n");
			break;
	}
	return 0;
}