#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEBUG_ON 0

int main(void)
{
	int n;
	scanf("%d", &n);
	int count = pow(2.0, n), a[count];
	int leftWinner, rightWinner, leftMax = 0, rightMax = 0;

	for (size_t i = 0; i < count; i++)
	{
		scanf("%d", &a[i]);
	}
	for (size_t i = 0; i < count / 2; i++)
	{
		if (a[i] > leftMax)
		{
			leftMax = a[i];
			leftWinner = i;
		}
	}
	for (size_t i = count / 2; i < count; i++)
	{
		if (a[i] > rightMax)
		{
			rightMax = a[i];
			rightWinner = i;
		}
	}
#if DEBUG_ON
	printf("leftWinner: %d\nrightWinner: %d\n", leftWinner + 1, rightWinner + 1);
	printf("leftMax: %d\nrightMax: %d\n", leftMax, rightMax);
	printf("output: %d\n", (leftMax > rightMax) ? rightWinner + 1 : leftWinner + 1);
#endif
	printf("%d\n", (leftMax > rightMax) ? rightWinner + 1 : leftWinner + 1);
	return 0;
}
