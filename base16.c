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

void	ft_affc(char c)
{
	write (1, &c, 1);
}

int	ft_puthexaup(int nb)
{
	int		count;
	char	*lett;

	count = 0;
	*lett = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_puthexaup(nb / 16);
		count ++;
	}
	if ((nb % 16) != 0)
		count ++;
	ft_affc(lett[nb % 16]);
	return (count);
}

int	ft_puthexax(int nb)
{
	int	count;
	char	*lett;

	count = 0;
	*lett = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_puthexax(nb / 16);
		//count++;
	}
	if ((nb % 16) != 0)
		count++;
	ft_affc(lett[nb % 16]);
	return (count);
}
/*
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
