/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_Crane_and_Turtle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:26:47 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/08 12:50:45 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool	is_true(int x, int y) {
	for (int i = 0; i <= x; i++) {
		if (y == i * 2 + (x - i) * 4)
			return true;
	}
	return false;
}

int		main(void) {
	int	x, y;

	scanf("%d %d", &x, &y);
	puts(is_true(x, y) ? "Yes" : "No");
	return 0;
}
