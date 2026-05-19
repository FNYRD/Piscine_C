/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:50:20 by jericard          #+#    #+#             */
/*   Updated: 2025/09/09 10:50:21 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	dif;
	int	*range;
	int	i;

	i = 0;
	dif = max - min;
	range = (int *)malloc((dif) * sizeof(int));
	if (min >= max || !range)
		return (NULL);
	while (i < dif)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	dif;
	int i; 

	i = 0;
	min = 1;
	max = 10;
	dif = (max - min);
	range = ft_range(min, max);

	while (i < dif)
	{
		printf("%d",range[i]);
		i++;
	}
	return (0);
}
*/