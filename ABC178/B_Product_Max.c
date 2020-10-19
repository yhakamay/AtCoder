#include <stdio.h>

int	main(void)
{
	long long	a, b, c, d;
	long long	max;

	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	max = a * c;
	if (a * d > max)
		max = a * d;
	if (b * c > max)
		max = b * c;
	if (b * d > max)
		max = b * d;
	printf("%lld", max);
	return (0);
}
