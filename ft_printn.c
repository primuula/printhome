/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:46:33 by safamran          #+#    #+#             */
/*   Updated: 2024/12/19 19:19:04 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptc(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{	
	char	*str;
	int		y;

	str = ft_itoa(nb);
	y = ft_putstr(str);
	free (str);
	return (y);
}

int	ft_putnbrui(unsigned int nb)
{
	char			*str;
	unsigned int	y;

	str = ft_unitoa(nb);
	y = ft_putstr(str);
	free (str);
	return (y);
}

/*
int main()
{
   //ft_putnbr(-2147483648);
   ft_putnbr(ft_putnbr(55));
    return (0);
}*/
