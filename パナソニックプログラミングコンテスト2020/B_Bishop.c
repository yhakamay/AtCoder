/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_Bishop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 22:32:51 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/06 22:46:00 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	long	h, w;
	long	ans;

	scanf("%ld %ld", &h, &w);
	if (h == 1 || w == 1) {
		puts("1");
		return 0;
	}
	ans = (h * w % 2 == 1) ? (h * w / 2 + 1) : (h * w / 2);
	printf("%ld", ans);
	return 0;
}
