/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C_Forbidden_List.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:52:08 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/08 13:09:52 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

#define ABS(v) ((v) >= 0 ? (v) : -(v))

bool	is_p(int n, int p[]) {
	int i = 0;

	while (p[i]) {
		if (n == p[i])
			return true;
		i++;
	}
	return false;
}

int		main(void) {
	int	x, n, i = 0, ret = 100;
	int	p[101];

	scanf("%d %d", &x, &n);
	while (i < n) {
		scanf("%d", &p[i]);
		i++;
	}
	i = -100;
	while (i < 200) {
		if (ABS(ret - x) > ABS(i - x))
			ret = i;
		i++;
	}
	printf("%d", ret);
	return 0;
}
