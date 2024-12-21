/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:45:15 by safamran          #+#    #+#             */
/*   Updated: 2024/12/21 13:54:17 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	taille(long n)
{
	int	len;

	len = 0;
	if (!n)
		return (1);
	if (n < 0)
	{
	n *= -1;
	len++;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	putn(int n)
{
	if (n > 9)
		putn(n / 10);
	n = n % 10;
	n += 48;
	return (n);
}

int	signe(int n)
{
	int		sign;
	long	n_l;

	sign = 0;
	if (n < 0)
	{
		n_l = (long)n * -1;
		sign = 1;
	}
	return (sign);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	n_l;
	int		len;
	int		sign;

	sign = signe(n);
	len = taille(n);
	if (n < 0)
		n_l = (long)n * -1;
	else
		n_l = n;
	str = malloc (len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	str[len--] = n_l % 10 + '0';
	n_l /= 10;
	while (len >= 0)
	{
		str[len--] = putn(n_l);
		n_l /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
