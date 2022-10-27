[예제]
#include <stdio.h> //라이브러리에서 헤더파일을 가져온다
//#으로 시작하는 문장은 전처리기 지시자
//#include는 소스 코드 안에 특정파일을 포함시키라고 지시하는 명령어
//stdio.h는 헤더파일, 컴파일러가 필요로 하는 정보를 가지고 있다

int main(void) { //main 함수
 printf("hello world!");  // hello world! 출력
 return 0; //main() 함수가 종료하면서 값을 반환하는 문장
}

/*stdio.h
...
int printf(char *, ...);
...*/
