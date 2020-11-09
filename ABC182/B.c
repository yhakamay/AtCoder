/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:25:53 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/08 22:12:16 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	int	a[101];
	int	n, i, d, ans, nums_max, count_max, count_tmp;

	scanf("%d", &n);
	i = 0;
	while (i < n) {
		scanf("%d", &a[i]);
		i++;
	}
	d = 2;
	count_max = 0;
	while (d <= nums_max) {
		i = 0;
		count_tmp = 0;
		while (i < n) {
			if (a[i] % d == 0) {
				count_tmp++;
			}
			i++;
		}
		if (count_tmp > count_max) {
			count_max = count_tmp;
			ans = d;
		}
		d++;
	}
	printf("%d", ans);
	return 0;
}
