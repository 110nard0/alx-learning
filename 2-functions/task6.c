#include "main.h"
#include <stdio.h>

int _abs(int);

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}

int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else 
		return n;
}
