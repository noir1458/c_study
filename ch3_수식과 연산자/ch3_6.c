//bit_shift
#include <stdio.h>
int main(void) {
 int x = 9;//1001(2진법)

 printf("%d << 1 = %d\n", x, x << 1); //10010(2진법) = 18
 printf("%d >> 1 = %d\n", x, x >> 1); //00100(2진법) = 4

 return 0;
}