/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:24:19 by jericard          #+#    #+#             */
/*   Updated: 2025/09/04 12:24:21 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	aux;
	int	control;

	control = nb;
	aux = nb -1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (aux >= 1)
	{
		if (control == nb)
		{
			control = nb * aux;
			aux--;
		}
		else
		{
			control += control * aux;
		}
		aux--;
	}
	return (control);
}
/*
int	main(void)
{
	int i;
	int factorial;

	i = 7;
	factorial = ft_iterative_factorial(i);
	printf("%d", factorial);

}
*/