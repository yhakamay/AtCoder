#include <stdio.h>

int main(void)
{
	int n, m, t;
	scanf("%d %d %d", &n, &m, &t);
	int charge = n, pos = 0;

	while (m--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		charge -= a - pos;
		if (charge < 1)
			break;
		charge += b - a;
		pos = b;
		charge = (charge > n) ? n : charge;
	}
	puts(charge > t - pos ? "Yes" : "No");
	return 0;
}
