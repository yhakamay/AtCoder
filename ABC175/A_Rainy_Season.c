/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Rainy_Season.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 23:40:04 by yhakamay          #+#    #+#             */
/*   Updated: 2020/10/23 00:06:21 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		max = 0;
	char	s[4];

	scanf("%s", s);
	for (int i = 0; i < 4; i++)
		if (s[i] == 'R')
			max++;
	if (s[0] == 'R' && s[1] == 'S' && s[2] == 'R')
		max--;
	printf("%d", max);
	return (0);
}