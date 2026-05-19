/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:33:28 by jericard          #+#    #+#             */
/*   Updated: 2025/09/03 09:33:30 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*aux(char *str, char *to_find)
{
	char	*s;
	char	*t;

	s = str;
	t = to_find;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*s && *t && *s == *t)
	{
		s++;
		t++;
	}
	if (*t == '\0')
	{
		return (str);
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		p = aux(str, to_find);
		if (p)
		{
			return (p);
		}
		str++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "piscine Benguerir Khouribga";
    char to_find[] = "Benguerir";
    char *r = ft_strstr(str, to_find);

    if (r)
        printf("%s\n", r);
    else
        printf("No encontrado\n");
    return 0;
}
*/