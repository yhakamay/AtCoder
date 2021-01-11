#include <stdio.h>

int	main(void)
{
	int	a, b, c, d, ans;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	ans = (a < b) ? a : b;
	ans = (c < ans) ? c : ans;
	ans = (d < ans) ? d : ans;
	printf("%d", ans);
	return 0;
}
