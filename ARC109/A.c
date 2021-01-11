/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:48:11 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/29 17:57:10 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a, b, x, y;
	int	ans;

	scanf("%d %d %d %d", &a, &b, &x, &y);
	if (2 * x < y)
	{
		ans = 2 * x * abs(a - b);
		ans += (a > b) ? -x : x;
	}
	else if (b < a && x < y)
		ans = y * (abs(a - b) - 1) + x;
	else
		ans = y * abs(a - b) + x;
	printf("%d\n", ans);
}
