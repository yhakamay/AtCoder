#include <stdio.h>

int	main(void)
{
	int	tc;
	int	a, b;
	int	count = 0;

	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d %d", &a, &b);
		if (a == b)
			count++;
		if (count == 3)
		{
			puts("Yes");
			return 0;
		}
		else if (a != b)
			count = 0;
	}
	puts("No");
	return 0;
}
