/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:43:56 by safamran          #+#    #+#             */
/*   Updated: 2024/12/21 13:00:45 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	a;

	a = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
	return (a);
}
/*
void    ft_char(char c)
{
    write(1, &c, 1);
}

int main()
{
    char *test = "marvose !";
    ft_char(ft_putstr(test)+ '0');
    ft_char(ft_putcha)
return (0);
}*/
