/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_Almost_GCD.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:11:31 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/09 16:36:26 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	int	n, i, j, d, ans, count_tmp, count_max;
	int	a[101];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (d = 2; d <= 1000; d++) {
		for (i = 0; i < n; i++) {
			if (a[i] % d == 0)
				count_tmp++;
		}
		if (count_tmp > count_max) {
			count_max = count_tmp;
			ans = d;
		}
		count_tmp = 0;
	}
	printf("%d", ans);
	return 0;
}
