#include<stdlib.h>
#include<stdio.h>

int Odd(int U);
int Even(int U);
int All(int U);

int main(void)
{
	int x, y;
	char add;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d", &x);
	printf("�аݭn���_�ƩM(O)�A���ƩM(E)�A�٬O��ƩM(I)?�п��");
	scanf_s(" %c", &add);

	switch (add)
	{
	case 'O':
		y = Odd(x);
		break;
	case 'E':
		y = Even(x);
		break;
	case 'I':
		y = All(x);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n", y);
	system("pause");
	return 0;
}
int Odd(int U)
{
	int sum=0;
	for (int i = 0; i <= U; i++)
		if (i % 2 == 1)
			sum = sum + i;
	return sum;
}
int Even(int U)
{
	int sum=0;
	for (int i = 0; i <= U; i++)
		if (i % 2 == 0)
			sum = sum + i;
	return sum;
}
int All(int U)
{
	return Odd(U) + Even(U);
}