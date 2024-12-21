/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:25:55 by safamran          #+#    #+#             */
/*   Updated: 2024/12/21 13:54:49 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		raccourcis(const char *format, int i, int count, va_list h);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putnbrui(unsigned int nb);
int		ft_puthexaup(unsigned int nb);
int		ft_puthexax(unsigned int nb);
int		voidptr(unsigned long long ptr);
int		exeptr(unsigned long long ptr);
char	*ft_itoa(int n);
char	*ft_unitoa(unsigned int n);

#endif
