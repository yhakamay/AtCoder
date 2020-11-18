/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:05:24 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/16 15:21:35 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	int		n, k, m, a, ans;
	long	sofar = 0;

	scanf("%d %d %d", &n, &k, &m);
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &a);
		sofar += a;
	}
	ans = m * n - sofar;
	if (ans < 0)
		ans = 0;
	if (ans > k)
		ans = -1;
	printf("%d", ans);
	return 0;
}
