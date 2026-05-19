/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 10:55:06 by jericard          #+#    #+#             */
/*   Updated: 2025/08/28 10:59:06 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	other;

	negative = 'N';
	other = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &other, 1);
	}
}
/*
int main(void){
	ft_is_negative(-2);
	ft_is_negative(2);
	ft_is_negative(0);
}
*/