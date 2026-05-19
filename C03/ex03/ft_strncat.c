/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:56:59 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 18:57:01 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	counting(char *dest)
{
	int	i;

	i = 0;
	while (*dest)
	{
		i++;
		dest++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	s;

	s = counting(dest);
	i = 0;
	if (nb > 0)
	{
		while (src[i] != '\0')
		{
			dest[s] = src[i];
			s++;
			i++;
			nb--;
			if (nb == 0)
			{
				dest[s] = '\0';
				return (dest);
			}
		}
	}
	dest[s] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "World";
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}
	printf("\n");
	ft_strncat(a, b, 3);

	i = 0;
	while (a[i] != '\0')
	{
		printf("%c", a[i]);
		i++;
	}	
}
*/
