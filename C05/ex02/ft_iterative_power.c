/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:14:05 by jericard          #+#    #+#             */
/*   Updated: 2025/09/04 13:14:07 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	control;

	control = power;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	control = 1;
	while (power > 0)
	{
		control *= nb;
		power--;
	}
	return (control);
}
/*
int	main(void)
{
	int power;

	power = ft_iterative_power(10, 0);
	printf("%d", power);
}
*/