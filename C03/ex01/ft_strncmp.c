/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:40:48 by jericard          #+#    #+#             */
/*   Updated: 2025/09/02 17:40:50 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	d;

	d = 0;
	while (d < n && (s1[d] || s2[d]))
	{
		if (s1[d] != s2[d])
		{
			return (s1[d] - s2[d]);
		}
		d++;
	}
	return (0);
}
/*
int	main(void)
{
	char a[] = "ABC";
	char b[] = "ABZ";
	int v;

	v = ft_strncmp(a, b, 2);
	printf("%d", v);
	return (0);
}
*/