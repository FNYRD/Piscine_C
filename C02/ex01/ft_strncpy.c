/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:34:35 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 10:44:03 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int     n;
	char	src[] = "hod";
	char	dest[] = "perr";
	int	i;

	i = 0;
	n = 0;
        while (dest[n] != '\0')
	{
		n++;
	}
	n++;
	printf("%d\n",n);
	ft_strncpy(dest, src, n);

	n = 0;
	while (dest[n] != '\0')
        {
                n++;
        }
        n++;
	printf("%d\n",n);
	i = 0;

        while (dest[i] != '\0')
        {
                write(1, &dest[i], 1);
		i++;
        }
	return (0);
}
*/
