/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:33:31 by jericard          #+#    #+#             */
/*   Updated: 2025/08/28 16:33:33 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a /= *b;
	*b = c % *b;
}
/*
int main(void)
{
	int a;
	int b;

	a = 100;
	b = 30;

	ft_ultimate_div_mod(&a,&b);
	printf("%d,%d",a,b);
}
*/