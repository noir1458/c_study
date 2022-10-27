//increment, decrement
#include <stdio.h>
int main(void) {
 int x, y;

 x = 1; //x는1
 y=++x; //x는2 y도2 (증가시키고 대입 ++x)
 printf("x=%d ,y=%d\n", x, y);

 y = x++;//y는2 x는3(대입하고 그 뒤에 증가 x++)
 printf("x=%d ,y=%d\n", x, y);

 return 0;
}