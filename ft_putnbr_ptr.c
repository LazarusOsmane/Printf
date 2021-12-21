/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lazarus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:02:07 by lazarus           #+#    #+#             */
/*   Updated: 2021/12/21 05:33:30 by lazarus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>


int	ft_putchar(char c)
{
	  return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	  int	count;

	  if (!s)
		    return (write(1, "(null)", 6));
	  count = 0;
	  while (s[count])
		    write(1, s + count++, 1);
	  return (count);
}

int	ft_putnbr_ptr2(unsigned int nbr, int count)
{
	  if (nbr > 0)
		    count = ft_putnbr_ptr2(nbr / 16, count + 1);
	  else if (nbr && nbr % 16 < 10)
		    ft_putchar((nbr % 16) + '0');
	  else if (nbr && nbr % 16 >= 10)
		    ft_putchar(((nbr % 16) - 10) + 'a');
	  else if (!nbr && count)
		    count += ft_putstr("0x");
	  else if (!nbr && !count)
		    return(ft_putstr(NULL));
	  return (count);
}

int	ft_putnbr_ptr(uintptr_t nbr, int count)
{
	  if (nbr <= INT_MAX)
		    return (ft_putnbr_ptr2(nbr, count));
	  /*else if (nbr > 0)
		    count = ft_putnbr_ptr(nbr / 16, count + 1);
	  if (nbr && nbr % 16 < 10)
		    ft_putchar((nbr % 16) + '0');
	  else if (nbr && nbr % 16 >= 10)
		    ft_putchar(((nbr % 16) - 10) + 'a');
	  else if (!nbr && count)
		    count += ft_putstr("0x");
	  else if (!nbr && !count)
		    return(ft_putstr(NULL))*/;
	  return (count);
}

int	main(void)
{
	  printf("= %d\n", ft_putnbr_ptr(-1, 0));
	  printf("= %d\n", printf("%p", -1));
	  printf("= %d\n", ft_putnbr_ptr(4242, 0));
	  printf("= %d\n", printf("%p", 4242));
	  printf("= %d\n", ft_putnbr_ptr(42, 0));
	  printf("= %d\n", printf("%p", 42));
	  printf("= %d\n", ft_putnbr_ptr(4, 0));
	  printf("= %d\n", printf("%p", 4));
	  printf("= %d\n", ft_putnbr_ptr(0, 0));
	  printf("= %d\n", printf("%p", 0));
	  printf("= %d\n", ft_putnbr_ptr(INT_MIN, 0));
	  printf("= %d\n", printf("%p", INT_MIN));
	  printf("= %d\n", ft_putnbr_ptr(INT_MAX, 0));
	  printf("= %d\n", printf("%p", INT_MAX));
	  printf("= %d\n", ft_putnbr_ptr(LONG_MIN, 0));
	  printf("= %d\n", printf("%p", LONG_MIN));
	  printf("= %d\n", ft_putnbr_ptr(LONG_MAX, 0));
	  printf("= %d\n", printf("%p", LONG_MAX));
	  printf("= %d\n", ft_putnbr_ptr(UINT_MAX, 0));
	  printf("= %d\n", printf("%p", UINT_MAX));
	  printf("= %d\n", ft_putnbr_ptr(ULONG_MAX, 0));
	  printf("= %d\n", printf("%p", ULONG_MAX));
	  printf("= %d\n", ft_putnbr_ptr(-ULONG_MAX, 0));
	  printf("= %d\n", printf("%p", -ULONG_MAX));
	  return (0);
}
