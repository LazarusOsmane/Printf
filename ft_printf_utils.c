/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:36:43 by engooh            #+#    #+#             */
/*   Updated: 2021/12/17 17:55:19 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = -1;
	while (str[++i])
		write(1, str + i, 1);
	return (i);
}

int	ft_putnbr(long n)
{
	static int	count;

	if (n < 0)
	{
		n = -1 * n;
		ft_putchar('-');
	}
	if (n > 0 && ++count)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
		return (count);
	}
	if (n == 0 && !count)
	{
		ft_putchar('0');
		return (count);
	}
	return (count);
}

int	ft_putnbr_ptr(unsigned long nbr, int count)
{

	if (nbr > 0)
	{
		ft_putnbr_ptr(nbr / 16, count + 1);
		if ((nbr % 16) < 10)
			ft_putchar((nbr % 16) + '0');
		else
			ft_putchar(((nbr % 16) - 10) + 'a');
		return (count);
	}
	if (!nbr)
		count += ft_putstr("0x");
	return (count);
}

int	ft_count_ptr(unsigned long nbr)
{
	if (!nbr)
		return (ft_putstr(NULL));
	return (ft_putnbr_ptr(nbr, 0));
}

int	ft_putnbr_base(unsigned int nbr, int base, char flag)
{
	static int	count;

	if (!nbr && !count && ft_putchar('0'))
		return (count);
	if (nbr > 0 && base == 16 && ++count)
	{
		ft_putnbr_base(nbr / 16, base, flag);
		if ((nbr % 16) < 10)
			ft_putchar((nbr % 16) + '0');
		else
			ft_putchar(((nbr % 16) - 10) + flag);
		return (count);
	}
	if (nbr > 0 && base == 10 && ++count)
	{
		ft_putnbr_base(nbr / base, base, flag);
		ft_putchar((nbr % base) + flag);
		return (count);
	}
	return (count);
}
