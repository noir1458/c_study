// I/O의 주체는 kernel, 절대 user mod 소프트웨어가 하지 않음
// user > kernel > hw

// getchar() putchar() - 입출력을 요구하는 함수, 직접하지 않음
// 입출력이라는 low level행위는 kernel에서
// kernel에 user mode 에서 접근할수 있게 허용된 인터페이스가 file

// 프로토콜이 TCP라면, 프로토콜 서비스를 추상화한 파일은 socket라고 부름
// socket? - 보내는건 능동적이지만 언제 수신될지 모름. 무턱대고 기다릴수 없으니 비동기(오면 알려줘서 빠르게 수행)


// getchar() 한글자만 퍼 올림(끌어옴), 10글자 있었으면 1글자 올려서 9글자 남음
// getchar() - 반환하는 형식은 char(1byte) >> int(4byte) 더 큰것을 반환한다 (char + int = int)
// char형과 int형은 부호가 있는 정수형. 둘다 int로 다루는걸 원칙으로.

// buffered I/O
// getchar() - 한글자 , gets() - 한줄(null문자 전까지), scanf() - 형식문자 규칙에 맞게 끊어내면
// gets() - 보안결함, gets_s() scanf_s()(윈도우만 있음) 사용하기

// non buffered IO - _getch()
// <conio.h> 버퍼에서 정보를 읽어오는게 아니고 하드웨어 장치가 인터럽트 발생시

//fflush() - output 버퍼를 비우는 함수(표준) 윈도우는 input도 가능
//fflush(stdin); - 윈도우만
// 대신 쓸수있는거 %*c  - 읽어서 그냥 버림 정확한건 찾아봐야
//scanf(); 한다음에 getchar(); 하면 엔터가 사라질것이다....

/*
#include <stdio.h>
int main(void)
{
	char ch = 0;

	ch = getchar();  // overwrite
	putchar(ch);
	putchar('Z');

	return 0;
}
*/
/*
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char ch = 0;
	printf("아무 키나 누르면 다음으로 넘어갑니다. \n");
	ch = _getch(); // 엔터키 누를 필요도 없이 바로 반환

	printf("입력한 키는");
	putchar(ch);
	printf("입니다.\n");

	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	char szName[32] = { 0 };
	printf("이름을 입력하세요: ");
	//gets(szName); //버퍼가 비어있다면 사용자로부터 문자열을 입력받아 버퍼에 저장
	gets_s(szName, sizeof(szName));

	printf("당신의 이름은 ");
	puts(szName); // printf와 다르게 자동 개행
	puts("입니다.");
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int x = 10;
	putchar('B');
	putchar('\n');
	printf("%c\n", 'A');

	printf("x는 %d 입니다.\n", x);
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", 10);
	printf("%u\n", 10);
	printf("%d\n", 10U);
	printf("%u\n", 10U);

	printf("%d\n", 2147483647);
	printf("%d\n", 2147483648);
	printf("%u\n", 2147483649);

	printf("%d\n", -1);
	printf("%u\n", -1);
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	FILE *fp = stdin;
	getchar();
	getchar();
	getchar();
	getchar();
	return 0;
}
*/

// putchar("\n") - char[] 배열은 주소로
// '\n' - char 문자는 값으로


#include <stdio.h>
int main(void)
{
	FILE *fp = stdin; // 버퍼확인용

	int age = 0;
	printf("나이는? : ");
	scanf_s("%d%*c", &age);

	//getchar(); // 버퍼 속에 엔터가 남아있어서 없다면 그냥 넘어가버린다.
	//fflush(stdin); //- 윈도우만, 잘안되는데 why??
	// scanf 안에 %*c 를 붙이면 엔터(0a) 까지 읽어온다. 그래서 해결가능

	char szName[12] = { "Hello" };
	printf("이름은? : ");
	gets_s(szName, sizeof(szName));

	printf("당신의 나이는 %d살이고 이름은 '%s'입니다.\n", age, szName);
	return 0;
}
