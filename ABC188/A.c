#include <stdio.h>

int main(void)
{
	int x, y;

	scanf("%d %d", &x, &y);
	if (x > y)
	{
		puts((y + 3 > x) ? "Yes" : "No");
	}
	else
	{
		puts((x + 3 > y) ? "Yes" : "No");
	}
	return 0;
}
