#include <stdio.h>

int	main(void)
{
	int		d;
	int		t;
	int		s;
	char	*ans;

	scanf("%d", &d);
	scanf("%d", &t);
	scanf("%d", &s);
	ans = "Yes";
	if (d > s * t)
		ans = "No";
	puts(ans);
	return 0;
}
