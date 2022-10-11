#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer()
{
    int x;

	printf("정수 하나를 입력하세요 :");
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
	
	printf("%dC%d는 %d이다", n, r, combination(n,r));
	
	return 0;
}
