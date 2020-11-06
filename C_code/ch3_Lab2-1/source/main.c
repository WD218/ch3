#include<stdio.h>
#include<stdlib.h>

long int fac(int a);

void main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = fac(m);
	b = fac(n);
	c = fac(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int fac(int a)
{
	int x;
	long int y = 1;
	for (x = 1; x <= a;x++)
	{
		y = y * x;
	}
	return y;
}