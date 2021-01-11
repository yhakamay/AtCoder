#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float	n;
	int		m, t, a, b;

	scanf("%f %d %d", &n, &m, &t);
	n -= 1 * t;
	printf("n: %f\n", n);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		n += 4 * (b - a);
		if (n <= 0)
			break ;
		printf("n: %f\n", n);
	}
	printf("n: %f\n", n);
	printf("%s", (n > 0) ? "Yes" : "No");
	return 0;
}
