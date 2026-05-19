/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:48:19 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 13:38:52 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	str = ptr;
	return (ptr);
}
/*
int main(void)
{
    char str[] = "abCD$$j4e";
    int i;

    i = 0;
    ft_strlowcase(str);
	while (str[i] != '\0')
	{
        printf("%c", str[i]);
		i++;
	}
}
*/
