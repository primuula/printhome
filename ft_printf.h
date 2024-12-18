/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:13:31 by safamran          #+#    #+#             */
/*   Updated: 2024/12/10 16:15:49 by safamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h> //permet de gerer // contient des outils pour travailler avec les arg variadique
# include <unistd.h>

int    ft_printf(const char *format, ...);
int    ft_putchar(char c);
int    ft_putstr(char *str);
int    ft_putnbr(int nb);
int    ft_putnbrui(unsigned int);
int    ft_puthexaup(int nb);
int    ft_puthexax(int nb);

#endif