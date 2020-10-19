#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[1001], t[1001];
	int	lenS, lenT, diff, ans = 1001;

	scanf("%s%s", s, t);
	lenS = strlen(s);
	lenT = strlen(t);
	for (int i = 0; i <= lenS - lenT; i++)
	{
		diff = 0;
		for (int j = 0; j < lenT; j++)
			if (s[i + j] != t[j])
				diff++;
		if (ans > diff)
			ans = diff;
	}
	printf("%d", ans);
	return 0;
}
