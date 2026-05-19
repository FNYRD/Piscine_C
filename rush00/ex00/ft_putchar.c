/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jericard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:38:42 by jericard          #+#    #+#             */
/*   Updated: 2025/08/30 15:18:49 by jericard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_x(int x)
{
	int	tempx;

	tempx = x;
	while (tempx > 0)
	{
		if (tempx == x || tempx == 1)
		{
			write(1, "o", 1);
		}
		else
		{
			write(1, "-", 1);
		}
		tempx--;
	}
	write(1, "\n", 1);
}

void	print_yaux(int tempx, int x)
{
	while (tempx > 0)
	{
		if (tempx == x || tempx == 1)
		{
			write(1, "|", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		tempx--;
	}
}

void	print_y(int x, int y)
{
	int		tempx;
	int		tempy;

	tempy = y - 2;
	if (y > 1)
	{
		while (tempy > 0)
		{
			y -= 2;
			tempx = x;
			print_yaux(tempx, x);
			write(1, "\n", 1);
			tempy--;
		}
	}
}

void	ft_putchar(int x, int y)
{
	if (x >= 0 && y >= 0)
	{
		if (y > 1)
		{
			print_x(x);
			print_y(x, y);
			print_x(x);
		}
		else
		{
			print_x(x);
			print_y(x, y);
		}
	}
}
