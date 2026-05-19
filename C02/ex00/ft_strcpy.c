/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:11:51 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 10:38:48 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "holaaaaaa";
	char	src[] = "chao";
	int	i;
	
	i = 0;
	ft_strcpy(dest, src);
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
*/
