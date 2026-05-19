/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:15:59 by jericard          #+#    #+#             */
/*   Updated: 2025/09/09 14:20:53 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	(*range) = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&range, 1, 10);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/