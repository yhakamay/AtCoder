/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:26:42 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/16 15:41:52 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	long	n, m, w_count = 0, a_count = 0, p, p_cpy = -1;
	char	s[3];
	scanf("%ld %ld", &n, &m);

	for (int i = 0; i < m; i++) {
		while (p != p_cpy) {
			scanf("%ld %s", &p, s);
			if (s[0] == 'A') {
				a_count++;
				break ;
			}
			else
				w_count++;
		}
		p_cpy = p;
	}
}
