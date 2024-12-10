/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:28:06 by safamran          #+#    #+#             */
/*   Updated: 2024/12/10 11:31:51 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linftprintf.h"

int	ft_printf(const char *format, ...) // format = argument obligatoire (min un )precedent l'argument dynamique && ... = param dynamique
{
    va_list h; // initialise 
    va_start( h, format) // format est le premier argumene fixe (= qui esttoujours pase a la fonction == arg obligatoire.)

    while(format[i] != '\0')
    {
         while(format[i] = '%')
        {
            if (format[i + 1] == c)
                ft_putchar//();
            if (format[i + 1] == 's')
                ft_putstr//(argd dynamique 1);
            if (format[i + 1] == 'n')
                ft_putnbr//(argd dynamique 2);
            if (format[i + 1] == '%')
                write(1, '%', 1);
        
        
        i ++;
        }
    i ++;
    }
}     

int main()
{

return (0);
}
