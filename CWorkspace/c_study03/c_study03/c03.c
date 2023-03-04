// I/O�� ��ü�� kernel, ���� user mod ����Ʈ��� ���� ����
// user > kernel > hw

// getchar() putchar() - ������� �䱸�ϴ� �Լ�, �������� ����
// ������̶�� low level������ kernel����
// kernel�� user mode ���� �����Ҽ� �ְ� ���� �������̽��� file

// ���������� TCP���, �������� ���񽺸� �߻�ȭ�� ������ socket��� �θ�
// socket? - �����°� �ɵ��������� ���� ���ŵ��� ��. ���δ�� ��ٸ��� ������ �񵿱�(���� �˷��༭ ������ ����)


// getchar() �ѱ��ڸ� �� �ø�(�����), 10���� �־����� 1���� �÷��� 9���� ����
// getchar() - ��ȯ�ϴ� ������ char(1byte) >> int(4byte) �� ū���� ��ȯ�Ѵ� (char + int = int)
// char���� int���� ��ȣ�� �ִ� ������. �Ѵ� int�� �ٷ�°� ��Ģ����.

// buffered I/O
// getchar() - �ѱ��� , gets() - ����(null���� ������), scanf() - ���Ĺ��� ��Ģ�� �°� �����
// gets() - ���Ȱ���, gets_s() scanf_s()(�����츸 ����) ����ϱ�

// non buffered IO - _getch()
// <conio.h> ���ۿ��� ������ �о���°� �ƴϰ� �ϵ���� ��ġ�� ���ͷ�Ʈ �߻���

//fflush() - output ���۸� ���� �Լ�(ǥ��) ������� input�� ����
//fflush(stdin); - �����츸
// ��� �����ִ°� %*c  - �о �׳� ���� ��Ȯ�Ѱ� ã�ƺ���
//scanf(); �Ѵ����� getchar(); �ϸ� ���Ͱ� ��������̴�....

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
	printf("�ƹ� Ű�� ������ �������� �Ѿ�ϴ�. \n");
	ch = _getch(); // ����Ű ���� �ʿ䵵 ���� �ٷ� ��ȯ

	printf("�Է��� Ű��");
	putchar(ch);
	printf("�Դϴ�.\n");

	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	char szName[32] = { 0 };
	printf("�̸��� �Է��ϼ���: ");
	//gets(szName); //���۰� ����ִٸ� ����ڷκ��� ���ڿ��� �Է¹޾� ���ۿ� ����
	gets_s(szName, sizeof(szName));

	printf("����� �̸��� ");
	puts(szName); // printf�� �ٸ��� �ڵ� ����
	puts("�Դϴ�.");
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

	printf("x�� %d �Դϴ�.\n", x);
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

// putchar("\n") - char[] �迭�� �ּҷ�
// '\n' - char ���ڴ� ������


#include <stdio.h>
int main(void)
{
	FILE *fp = stdin; // ����Ȯ�ο�

	int age = 0;
	printf("���̴�? : ");
	scanf_s("%d%*c", &age);

	//getchar(); // ���� �ӿ� ���Ͱ� �����־ ���ٸ� �׳� �Ѿ������.
	//fflush(stdin); //- �����츸, �߾ȵǴµ� why??
	// scanf �ȿ� %*c �� ���̸� ����(0a) ���� �о�´�. �׷��� �ذᰡ��

	char szName[12] = { "Hello" };
	printf("�̸���? : ");
	gets_s(szName, sizeof(szName));

	printf("����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.\n", age, szName);
	return 0;
}
