/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_ft_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:16:24 by engooh            #+#    #+#             */
/*   Updated: 2021/12/17 17:58:21 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ft_printf.h"
#include <limits.h>

int	main()
{
	int	i;
	int	j;

/*	ft_printf(" %p ", -1);
	ft_printf(" %p ", 1);
	ft_printf(" %p ", 15);
	ft_printf(" %p ", 16);
	ft_printf(" %p ", 17);*/
	i = ft_printf(" %p", LONG_MIN);
	ft_printf(" %p %p ", INT_MIN, INT_MAX);
	ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p ", 0, 0);
	printf("\n_________________________\n");
/*	printf(" %p ", (void *)-1);
	printf(" %p ", (void *)1);
	printf(" %p ", (void *)15);
	printf(" %p ", (void *)16);
	printf(" %p ", (void *)17);*/
	j = printf(" %p", LONG_MIN);
	printf(" %p %p ", INT_MIN, INT_MAX);
	printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf(" %p %p ", 0, 0);
	printf("%d %d", i, j);
	return (0);
}
