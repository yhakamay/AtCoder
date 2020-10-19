#include <stdio.h>

int	main(void)
{
	long long	n;
	long long	count = 0;

	scanf ("%lld", &n);
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < (n/i) + 1; j++)
		{
			if (i * j < n)
				count++;
		}
	}
	printf("%lld", count);
	return 0;
}
