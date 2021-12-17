/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:40:49 by engooh            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:01 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int	ft_check(char c);
int	ft_parse(char *s, va_list arg, int i, int count);
int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);
int	ft_putnbr_ptr(unsigned long nbr, int count);
int	ft_putnbr_base(unsigned int nbr, int base, char flag);
int	ft_count_ptr(unsigned long nbr);
#endif 
