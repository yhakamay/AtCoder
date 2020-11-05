/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Heavy_Rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:30:27 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/01 21:32:15 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	int		n;
	char	*ans = "White";

	scanf("%d", &n);
	if (n % 2 == 1)
		ans = "Black";
	puts(ans);
	return 0;
}
