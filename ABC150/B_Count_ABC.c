/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_Count_ABC.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:29:16 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/14 17:39:26 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	int	n;
	scanf("%d", &n);

	int		i, count;
	char	s[n];
	scanf("%s", s);
	for (i = 0, count = 0; s[i]; i++) {
		if (i + 2 == n)
			break ;
		else if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
			count++;
	}
	printf("%d", count);
	return 0;
}
