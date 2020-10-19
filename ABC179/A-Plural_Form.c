#include <stdio.h>
#include <string.h>

typedef	char String[1024];

int	main(void)
{
	String	s;
	int	count = 0;
	int	i = 0;

	scanf("%s", s);

	if (s[strlen(s) - 1] == 's')
		printf("%ses", s);
	else
		printf("%ss", s);

	return 0;
}
