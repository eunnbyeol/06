#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer()
{
    int x;

	printf("���� �ϳ��� �Է��ϼ��� :");
	scanf("%d", &x);
	return x;
}

int factorial(int n)
{
	int res = 1;
	int i;
	for (i=1; i<=n; i++)
		res = res * i;
	return res;
}

int combination(int n, int r)
{
	return( factorial(n) / factorial(n-r) / factorial(r));
}

int main(void)
{
	int n,r;
	
	n = get_integer(); 
	r = get_integer(); 
	
	printf("%dC%d�� %d�̴�", n, r, combination(n,r));
	
	return 0;
}
