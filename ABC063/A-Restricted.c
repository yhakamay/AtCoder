#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 + num2 >= 10)
	{
		printf("error");
		return 0;
	}
	printf("%d", num1 + num2);
	return 0;
}
