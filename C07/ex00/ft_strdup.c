/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:26:25 by jericard          #+#    #+#             */
/*   Updated: 2025/09/09 09:26:27 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;

	len = ft_strlen(src);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (0);
	new = ft_strcpy(new, src);
	return (new);
}
/*
int	main(void)
{
	char str[] = "hola";
	char *dest;

	dest = ft_strdup(str);
	printf("%s", dest);
	return (0);
}
*/