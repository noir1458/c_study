#include <stdio.h>
/* ~.c 정의define, ~.h 선언declaration */
int main(void)
/* 함수 선언+정의
int - 반환형식, void - 매개변수
main 함수의 시작이 프로그램의 시작, 반환하면 프로그램이 끝난다

항 item이 모여서 구문을 이루고 끝은 세미콜론으로;
{} scope - 여러 구문을 한 덩이로 묶을때 사용
구문이 모여서 함수가 된다*/
{
	printf("Hello World\n");
	return 0;
	/*호출자 함수(main)는 피호출자 함수(printf)의
	매개변수의 초기값(실인수)를 확정해야 한다.*/
}
/*
solution 안에 여러개의 project
project build는 f7
solution build는 ctrl + shift + B
실행은 ctrl + f5 (run)
f5는 debug mode run
빌드에서 오류 발생시 f4누르면 그 위치로 바로 커서이동

c >(compiler) obj >(linker) exe
*/