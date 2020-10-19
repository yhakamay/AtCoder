#include <stdio.h>

int	main(void)
{
	int	h, w, i, j;
	int	count = 0;
	char	map[101][101];

	scanf("%d %d", &h, &w);
	for (i = 0; i < h; i++)
		scanf("%s", map[i]);
	for (i = 0; i < h - 1; i++)
		for (j = 0; j < w; j++)
			if (map[i][j] == '.' && map[i + 1][j] == '.')
				count++;
	for (i = 0; i < h; i++)
		for (j = 0; j < w - 1; j++)
			if (map[i][j] == '.' && map[i][j + 1] == '.')
				count++;
	printf("%d", count);
	return 0;
}
