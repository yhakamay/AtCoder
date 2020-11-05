/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Payment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 23:27:33 by yhakamay          #+#    #+#             */
/*   Updated: 2020/10/23 23:34:09 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	price, num, charge, pay;

	num = 0;
	charge = 0;
	pay = num * 1000;
	scanf("%d", &price);
	while (price - pay > 0)
		num ++;
	printf("%d", price - pay)
}
