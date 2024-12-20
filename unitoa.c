/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unitoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:33:59 by safamran          #+#    #+#             */
/*   Updated: 2024/12/19 16:34:11 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	taille2(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	putn2(unsigned int n)
{
	if (n > 9)
		putn2(n / 10);
	n = n % 10;
	n += 48;
	return (n);
}

char	*ft_unitoa(unsigned int n)
{
	char	*str;
	long	n_l;
	int		len;

	len = taille2(n);
	n_l = n;
	str = malloc (len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	str[len--] = n_l % 10 + '0';
	n_l /= 10;
	while (len >= 0)
	{
		str[len--] = putn2(n_l);
		n_l /= 10;
	}
	return (str);
}
