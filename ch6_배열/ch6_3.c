#include <stdio.h>
#define SIZE 5

int main() {

 int i, k;
 int list[SIZE] = { 10,7,9,1,3 };

 for (k = 0; k < SIZE; k++) {
  for (i = 0; i < SIZE-1; i++) {
   if (list[i] > list[i + 1]) { //크기순이 아니면 교환
    int tmp = list[i];
    list[i] = list[i + 1];
    list[i + 1] = tmp; //서로 교환한다
   }

  }
 
 }

 for (i = 0; i < SIZE; i++) {
  printf("%d ", list[i]);
 }

 return 0;
}

/*
a 와 b를 교환할때 주의해야 한다. 새로 c라는 공간을 선언하고,
c=a
a=b
b=c
이렇게 교환해야 한다.

다른 교환 알고리즘도 있지만 생략.
*/