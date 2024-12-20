/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base16.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:37:18 by safamran          #+#    #+#             */
/*   Updated: 2024/12/18 16:37:21 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_affc(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_puthexaup(unsigned int nb)
{
	int i = 0;
	char	*lett;

	lett = "0123456789ABCDEF";
	if (nb == 0)
		return (ft_affc('0'));
	if (nb < 0)
	{
		nb = -nb;
		ft_affc('-');
		i++;
	}
	if (nb >= 16)
		i+= ft_puthexaup(nb / 16);
	ft_affc(lett[nb % 16]);
	i++;
	return (i);
}

int	ft_puthexax(unsigned int nb)
{
	int i = 0;
	char	*lett;

	lett = "0123456789abcdef";
	if (nb == 0)
		return (ft_affc('0'));
	if (nb < 0)
	{
		nb = -nb;
		ft_affc('-');
		i++;
	}
	if (nb >= 16)
		i+= ft_puthexax(nb / 16);
	ft_affc(lett[nb % 16]);
	i++;
	return (i);
}

int		exeptr(unsigned long long ptr)
{
	int i;
	i = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	else
	{
		i += write(1, "0x", 2);
		i+= voidptr(ptr);
	}
	return(i);
}
int		voidptr(unsigned long long ptr)
{
	int		i;
	char	*lett;
	
	i = 0;
	lett = "0123456789abcdef";
	if (ptr >= 16)
		i+= voidptr(ptr / 16);
	ft_affc(lett[ptr % 16]);
	i++;
	return (i);
}
/*
int	voidpointeur(void * str)
{
	

	return (i);
}

int main()
{     ft_puthexax(65772);
      ft_affc('\n');
      ft_puthexax(3650);
      ft_affc('\n');
      ft_puthexax(512);
      ft_affc('\n');
      ft_puthexax(3796);
return 0;
}*/
