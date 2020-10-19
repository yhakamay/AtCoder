#include <stdio.h>

int	main(void)
{
	int	distance;
	int	time;
	int	speed;

	scanf("%d", &distance);
	scanf("%d", &time);
	scanf("%d", &speed);

	if (distance <= speed * time)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
