/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:31:13 by jericard          #+#    #+#             */
/*   Updated: 2025/09/08 13:29:28 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 0)
		return (index);
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
/*
int	main(void)
{
	int	i;

	i = ft_fibonacci(5);
	printf("%d", i);
	return (0);
}
*/
