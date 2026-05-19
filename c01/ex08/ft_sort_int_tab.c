/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:30:44 by jericard          #+#    #+#             */
/*   Updated: 2025/08/29 11:30:48 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	j = 0;
	i = 0;
	while (i < size)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				temp = 0;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
/*
int main(void)
{
	int array[] = {89,10,44,2,150,5};
	int size;

	size = 6;
	ft_sort_int_tab(array , size);
	return 0;
}
*/	
