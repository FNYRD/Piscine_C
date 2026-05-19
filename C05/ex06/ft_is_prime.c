/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:47:00 by jericard          #+#    #+#             */
/*   Updated: 2025/09/08 14:20:42 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
int	main(void)
{
	int	i;

	i = ft_is_prime(6);
	printf("%d", i);
	return (0);
}
*/
