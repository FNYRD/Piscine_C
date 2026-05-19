/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:46:12 by jericard          #+#    #+#             */
/*   Updated: 2025/08/28 16:46:15 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	w;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		w = str[i];
		write(1, &w, 1);
		i++;
	}
}
/*
int main(void)
{
	char word[] = "hola";

	ft_putstr(&word[0]);
}
*/
