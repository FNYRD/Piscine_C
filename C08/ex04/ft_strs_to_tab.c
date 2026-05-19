/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:54:37 by jericard          #+#    #+#             */
/*   Updated: 2025/09/14 13:54:38 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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
		return (NULL);
	new = ft_strcpy(new, src);
	return (new);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*p;

	i = 0;
	p = malloc((ac + 1) * sizeof(t_stock_str));
	if (!p)
		return (NULL);
	while (i < ac)
	{
		p[i].size = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		if (!p[i].copy && av[i])
		{
			while (i-- > 0)
				free(p[i].copy);
			free(p);
			return (NULL);
		}
		i++;
	}
	p[i].size = 0;
	p[i].str = NULL;
	p[i].copy = NULL;
	return (p);
}
