#include <stdio.h>

void add(int *a, int *b, int *c)
{  *c = *a + *b;  }

void sub(int *a, int *b, int *c)
{  *c = *a - *b;  }

void div(int *a, int *b, int *c)
{  *c = *a / (*b); }

void mul(int *a, int *b, int *c)
{  *c = (*a) * (*b); }

int main()
{
	int a = 100;
	int b = 200;
	int c = 9999;
	char ch;
	int op = 0;
	void (*fp[4])(int *, int *, int *) = {add, sub, mul, div};

	scanf("%d %c %d", &a, &ch, &b);
	// ch = + add - sub * mul / div
	fprintf(stdout, "a,b,c : %d %d %d \n", a, b, c);

	switch (ch)
	{
		case '+':
			fp[1](&a,&b,&c);
			break;
		case '-':
			fp[2](&a,&b,&c);
			break;
		case '/':
			fp[3](&a,&b,&c);
			break;
		case '*':
			fp[4](&a,&b,&c);
			break;
	}
	fprintf(stdout, "a,b,c : %d %d %d \n", a, b, c);
}
