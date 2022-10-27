//if_else
#include <stdio.h>
int main(void) {

 int x;

 printf("점수를 입력하시오 : ");
 scanf("%d", &x);

 if (x > 50)
 {
  printf("점수가 50점 이상입니다\n");
  printf("^^\n");
 }
 else
 {
  printf("점수가 50점 아래입니다\n");
  printf("TT\n");
 }

 return 0;
}

/*
조건식 다음 여러문장이 실행되어야 한다면 중괄호로 묶어서 한번에 실행시키면 된다. 이러한 문장 그룹핑을 복합문(compound statement)라고 한다. 블록 이라고도 한다.
 if (x > 50)
  printf("점수가 50점 이상입니다\n");
  printf("^^\n");


이 문장에서 두번째 printf 문은 중괄호로 묶이지 않았으므로 무조건 실행된다
*/