/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_Various_distances.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:51:43 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/05 16:42:34 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	main(void) {
	int				n;
	long long		*x;
	long long int	m, e, c;

	scanf("%d", &n);
	x = (long long *)malloc(sizeof(long long) * n + 1);
	m = 0; c = 0; e = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lld", &x[i]);
		m += llabs(x[i]);
		e += pow(x[i], 2);
		c = llabs(x[i]) > c ? llabs(x[i]) : c;
	}
	printf("%lld\n%.15f\n%lld\n", m, sqrt((double)e), c);
	return 0;
}
