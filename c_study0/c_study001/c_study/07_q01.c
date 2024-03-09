//º° Âï±â 1
#include <stdio.h>
int main() {
	int i,j,k;
	scanf("%d", &k);

	for (i = 0; i < k; i++) {
		for (j = 0; j < k; j++) {
			if (j < i)
				printf(" ");
			else
				printf("*");
		}

		for (j = 0; j < k-1; j++) {
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		
		printf("\n");
	}
}