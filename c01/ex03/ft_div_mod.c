/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:24:47 by jericard          #+#    #+#             */
/*   Updated: 2025/08/28 15:24:50 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
    int divr; 
	int modr; 

	modr = 0;
	divr = 0;

	ft_div_mod(100,30,&divr,&modr);
	printf("%d %d",divr,modr);
}
*/