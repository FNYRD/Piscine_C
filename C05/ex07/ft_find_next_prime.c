/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:21:33 by jericard          #+#    #+#             */
/*   Updated: 2025/09/08 14:34:47 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
		return (0);
	while (prime < nb)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int	i;

	i = ft_find_next_prime(6);
	printf("%d", i);
	return (0);
}
*/
