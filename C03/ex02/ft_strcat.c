/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:11:27 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 18:11:30 by jericard         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	s = 0;
	s = counting(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[s] = src[i];
		s++;
		i++;
	}
	dest[s] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "hola";
	char	b[] = "chao";
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
	printf("%c", a[i]);
	i++;
	}
	printf("\n");
	ft_strcat(a, b);

	i = 0;
	while (a[i] != '\0')
	{
	printf("%c", a[i]);
	i++;
	}	
}
*/