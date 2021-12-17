/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 08:41:54 by engooh            #+#    #+#             */
/*   Updated: 2021/12/17 17:51:48 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check(char c)
{
	if (c != 'd' || c != 'i' || c != 'x' || c != 'X'
		|| c != 'c' || c != 's' || c != 'p' || c != 'u')
		return (0);
	return (1);
}

int	ft_parse(char *s, va_list arg, int i, int count)
{
	while (s[++i])
	{
		if (s[i] == '%' && ++i)
		{
			if (s[i] == 'd' || s[i] == 'i')
				count += ft_putnbr(va_arg(arg, int));
			if (s[i] == 'x')
				count += ft_putnbr_base(va_arg(arg, unsigned int), 16, 'a');
			if (s[i] == 'X')
				count += ft_putnbr_base(va_arg(arg, unsigned int), 16, 'A');
			if (s[i] == 'c')
				count += ft_putchar(va_arg(arg, int));
			if (s[i] == 's')
				count += ft_putstr(va_arg(arg, char *));
			if (s[i] == 'p')
				count += ft_count_ptr((unsigned long)va_arg(arg, void *));
			if (s[i] == 'u')
				count += ft_putnbr_base(va_arg(arg, unsigned int), 10, '0');
			else if (ft_check(s[i]))
				return (0);
		}
		else
			count += ft_putchar(s[i]);
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int			count;
	va_list	args;

	va_start(args, s);
	count = ft_parse((char *)s, args, -1, 0);
	va_end(args);
	return (count);
}
