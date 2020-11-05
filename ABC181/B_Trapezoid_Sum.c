/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:19:42 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/01 22:29:16 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	long long	a, b, n;
	long long	ans = 0;

	scanf("%lld", &n);
	while (n--)
	{
		scanf("%lld %lld", &a, &b);
		if ((b - a + 1) % 2 == 0)
			ans += (a + b) * ((b - a + 1) / 2);
		else
			ans += (a + b) * ((b - a + 1) / 2) + (a + ((b - a) / 2));
	}
	printf("%lld\n", ans);
	return 0;
}
