#include<stdio.h>
int main() {
 int i, sum, a;
 sum = 0;

 printf("~까지 합:");
 scanf("%d", &a);

 for (i = 1; i <= a; i++)
  sum += i;

 printf("%d 까지 합 : %d", a, sum);
 return 0;
}

