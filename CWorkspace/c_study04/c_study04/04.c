// ���� �𿩼� ������ �ȴ�.

// ������ �켱����
// ���ռ��� ���� 2*3*4
// ���ռ��� -> �̹Ƿ� ���ʿ��� ���������� ����Ѵ�.
// �ܼ�����(copy&overwrite)�� ���ռ�(=)�� <-
// k = 10

// ������ �ӽð��
// 3+4+5 ����Ҷ�
// 7(�ӽð��)+5
// 12

//location,left-value = right value

/*
#include <stdio.h>
int main(void)
{
	int a;
	a = 3;
	//3 = 4; // error C2106: '=': ���� �ǿ����ڴ� l-value�̾�� �մϴ�.
	const int b = 10;
	//b = 5; // error C2166: l-value�� const ��ü�� �����մϴ�.
	//l-value �� ���ȭ�� ��ü��...
	return 0;
}
*/

// ���� �ڷᰣ�� ����
// int4 + char1 = ??
// int �� �ȴ�. ǥ�������� ū�� ����
// 'A' + 1
// 65 + 1 = 66 'B'

// putchar(int) - �Ű������� int.
// putchar('A'+1); = B
// ���� �����ϱ� char��� �����Ҽ� ������, type promotion(���°�) ����������

/*
#include <stdio.h>
// 5/2 �� 5/2.0 �� ����� �ٸ���. ������ ���ߴ°��� �߿��ϴ�.
int main(void)
{
	int x = 10;
	// int* int -> %d
	printf("%d\n", x * 10);
	// int *double -> %d(��� �Ұ���)
	printf("%d\n", x * 10.0);

	// int/int �� int �����̴�. �Ǽ� ������ �ƴ�!
	// �� �Ҽ��� ���ϴ� ��������.
	printf("%d\n", x / 10);
	// int/int�� int �����̹Ƿ� %f�� ����� �� ����.
	printf("%f\n", 5 / 2);

	// double/int�� double�����̴�.
	printf("%f\n", 5.0 / 2);
	return 0;
}
*/
// 7/0 ??? �������� ������ �ݺ��ϴµ�...
// 7-0�� ��� �ݺ��ϰ� �ȴ�.(���ѷ���)

/*
#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	printf("�� ���� �Է��ϼ���");
	scanf("%d%d", &a, &b);
	
	printf("%.2f", (a + b) / 2.0);
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int ninput = 0;
	int nhour, nmin, nsec;
	printf("�ʸ� �Է��Ͻÿ�");
	scanf("%d", &ninput);
	nmin = ninput / 60;
	nsec = ninput % 60;
	nhour = nmin / 60;
	nmin = nmin % 60;
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", ninput, nhour, nmin, nsec);
	// nsec, nsec/3600, nsec%3600/60, nsec%60 
	return 0;
}*/


#include <stdio.h>
//��Ʈ������ �������� ����
int main(void)
{
	printf("%d\n", 3);
	printf("%d\n", ~3); //1�� ����
	printf("%d\n", ~3 + 1); //2�� ����
	return 0;
}