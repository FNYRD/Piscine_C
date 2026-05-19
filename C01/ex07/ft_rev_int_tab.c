/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:31:57 by jericard          #+#    #+#             */
/*   Updated: 2025/08/28 17:32:01 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		var;

	i = 0;
	size--;
	while (i < size)
	{
		var = tab[i];
		tab[i] = tab[size];
		tab[size] = var;
		i++;
		size--;
	}
}
/*
int main(void)
{
	int myNumbers[] = {25, 50, 75, 100};
	int size = 4;

	ft_rev_int_tab(myNumbers, size);
	return 0;
}
*/