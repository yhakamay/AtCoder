/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C_Count_Order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:43:08 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/14 18:22:53 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	int	n, n_cpy, i, ppower, qpower;
	int	p[8], q[8];

	scanf("%d", &n);
	n_cpy = n;
	ppower = 0;
	while (n_cpy--) {
		scanf("%d", &p[n_cpy]);
		ppower += n_cpy * p[n_cpy];
	}
	while (n_cpy--) {
		scanf("%d", &q[n_cpy]);
		ppower += n_cpy * q[n_cpy];
	}
}
