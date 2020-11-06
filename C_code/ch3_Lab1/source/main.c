#include<stdlib.h>
#include<stdio.h>

int Odd(int U);
int Even(int U);
int All(int U);

int main(void)
{
	int x, y;
	char add;
	printf("1+2+...+n=?請輸入n=");
	scanf_s("%d", &x);
	printf("請問要做奇數和(O)，偶數和(E)，還是整數和(I)?請選擇");
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
		printf("選擇錯誤\n");
		return -1;
	}
	printf("總合為%d\n", y);
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