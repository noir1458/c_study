// 항이 모여서 구문이 된다.

// 연산자 우선순위
// 결합성의 문제 2*3*4
// 결합성이 -> 이므로 왼쪽에서 오른쪽으로 계산한다.
// 단순대입(copy&overwrite)의 결합성(=)은 <-
// k = 10

// 연산의 임시결과
// 3+4+5 계산할때
// 7(임시결과)+5
// 12

//location,left-value = right value

/*
#include <stdio.h>
int main(void)
{
	int a;
	a = 3;
	//3 = 4; // error C2106: '=': 왼쪽 피연산자는 l-value이어야 합니다.
	const int b = 10;
	//b = 5; // error C2166: l-value가 const 개체를 지정합니다.
	//l-value 가 상수화된 개체라서...
	return 0;
}
*/

// 이형 자료간의 연산
// int4 + char1 = ??
// int 가 된다. 표현범위가 큰걸 따라감
// 'A' + 1
// 65 + 1 = 66 'B'

// putchar(int) - 매개변수가 int.
// putchar('A'+1); = B
// 글자 찍으니까 char라고 생각할수 있지만, type promotion(형승격) 문제때문에

/*
#include <stdio.h>
// 5/2 와 5/2.0 은 결과가 다르다. 형식을 맞추는것이 중요하다.
int main(void)
{
	int x = 10;
	// int* int -> %d
	printf("%d\n", x * 10);
	// int *double -> %d(출력 불가능)
	printf("%d\n", x * 10.0);

	// int/int 는 int 형식이다. 실수 형식이 아님!
	// 단 소수점 이하는 버려진다.
	printf("%d\n", x / 10);
	// int/int는 int 형식이므로 %f로 출력할 수 없다.
	printf("%f\n", 5 / 2);

	// double/int는 double형식이다.
	printf("%f\n", 5.0 / 2);
	return 0;
}
*/
// 7/0 ??? 나눗셈시 뺄셈을 반복하는데...
// 7-0을 계속 반복하게 된다.(무한루프)

/*
#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	printf("두 수를 입력하세요");
	scanf("%d%d", &a, &b);
	
	printf("%.2f", (a + b) / 2.0);
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int ninput = 0;
	int nhour, nmin, nsec;
	printf("초를 입력하시오");
	scanf("%d", &ninput);
	nmin = ninput / 60;
	nsec = ninput % 60;
	nhour = nmin / 60;
	nmin = nmin % 60;
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", ninput, nhour, nmin, nsec);
	// nsec, nsec/3600, nsec%3600/60, nsec%60 
	return 0;
}*/


#include <stdio.h>
//비트연산자 보수연산 예제
int main(void)
{
	printf("%d\n", 3);
	printf("%d\n", ~3); //1의 보수
	printf("%d\n", ~3 + 1); //2의 보수
	return 0;
}