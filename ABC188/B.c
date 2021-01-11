#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, ans = 0;
	scanf("%d", &n);
	int a[n], b[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);
	for (int i = 0; i < n; i++)
		ans += a[i] * b[i];

	puts(ans == 0 ? "Yes" : "No");
	return 0;
}
