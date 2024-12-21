/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:28:06 by safamran          #+#    #+#             */
/*   Updated: 2024/12/21 13:49:29 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	h;
	int		i;
	int		count;

	va_start(h, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count += ft_putchar(format[i]);
		if (format[i] == '%')
		{
			count = raccourcis(format, i, count, h);
		i++;
		}
	i++;
	}
	va_end(h);
	return (count);
}

int	raccourcis(const char *format, int i, int count, va_list h)
{
	if (format[i + 1] == 'c')
	{
		ft_putchar((unsigned char)va_arg(h, int));
	count ++;
	}
	else if (format[i + 1] == 's')
		count += ft_putstr(va_arg(h, char *));
	else if (format[i + 1] == 'x')
		count += ft_puthexax(va_arg(h, unsigned int));
	else if (format[i + 1] == 'X')
		count += ft_puthexaup(va_arg(h, unsigned int));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		count += ft_putnbr(va_arg(h, int));
	else if (format[i + 1] == 'u')
		count += ft_putnbrui(va_arg(h, unsigned int));
	else if (format[i + 1] == '%')
		count += write(1, "%", 1);
	else if (format[i + 1] == 'p')
		count += exeptr(va_arg(h, unsigned long long));
	return (count);
}
/*
#include <stdio.h>
int main()
{
	long *ptr = 9223372036854775807;
    char *test = " Braja !";
	printf("VRAI retour : %c" ,printf("%s" "%p", test, ptr));
	printf("\n");
	printf("MON retour : %c" ,ft_printf("%s" "%p", test, ptr));

	printf("\n");
   	printf("Mon retour : %x",ft_printf("%s" "%x", test, i));

	char i = 65;
	printf("VRAI retour : %c" ,printf("%c", i));
	printf("\n");
   	printf("Mon retour : %c",ft_printf("%c", i));

	return (0);
}*/
