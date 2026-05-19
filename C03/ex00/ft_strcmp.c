/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:03:28 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 15:21:54 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0')
	{
		if ((s1[i] - s2[i]) < 0)
		{
			return (s1[i] - s2[i]);
		}
		if ((s1[i] - s2[i]) > 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "ABC";
	char    s2[] = "ABC";
	int	c;

	c = 0;
	c = ft_strcmp(s1, s2);
	printf("%d", c);
	return (0);
}
*/
