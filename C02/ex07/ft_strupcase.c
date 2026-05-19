/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:19:24 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 13:01:13 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	str = ptr;
	return (str);
}
/*
int main(void)
{
    char str[] = "abCD$$j4e";
    int i;

    i = 0;
    ft_strupcase(str);
	while (str[i] != '\0')
	{
        printf("%c", str[i]);
		i++;
	}
}
*/
