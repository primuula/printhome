/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:28:06 by safamran          #+#    #+#             */
/*   Updated: 2024/12/18 17:24:47 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	h;
	int	i;
	int	count;

	va_start(h, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				ft_putchar((unsigned char)va_arg(h, int));
				count ++;
			}
			else if (format[i + 1] == 's')
				count += ft_putstr(va_arg(h, char *));
			else if (format[i + 1] == 'x')
				count += ft_puthexax(va_arg(h, int));
			else if (format[i + 1] == 'X')
				count += ft_puthexaup(va_arg(h, int));
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count += ft_putnbr(va_arg(h, int));
			else if (format[i + 1] == 'u')
				count += ft_putnbrui(va_arg(h, unsigned int));
			else if (format[i + 1] == '%')
				count += write(1, "%", 1);
		i++;
		}
		else if (format[i] != '%' && format[i - 1] != '%' )
			ft_putchar(format[i]);
	i++;
	}
	va_end(h);
	return (count);
}

#include <stdio.h>
int main()
{
	int i = -1133;
    char *test = " Braja !";
	printf("VRAI retour : %d" ,printf("%s" "%d", test, i));
	printf("\n");
   	printf("Mon retour : %d",ft_printf("%s" "%d", test, i));
return (0);
}
