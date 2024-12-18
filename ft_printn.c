/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:46:33 by safamran          #+#    #+#             */
/*   Updated: 2024/12/18 16:44:28 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptc(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	static int count;
	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
			count ++;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			count ++;
		}
		//if ((nb % 10) != 0)
			count ++;
		ft_ptc((nb % 10) + '0');
	}
	return (count);
}

int	ft_putnbrui(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
	ft_putnbr(nb / 10);
	count++;
	}
	if ((nb % 10) != 0)
	count++;
	ft_ptc((nb % 10) + '0');
	return (count);
}
/*
int main()
{
   //ft_putnbr(-2147483648);
   ft_putnbr(ft_putnbr(55));
    return (0);
}*/
