/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:56:53 by engooh            #+#    #+#             */
/*   Updated: 2021/12/17 10:43:17 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	i;

	i = -126;
	while (++i < 128)
	{
		printf("%c", i);
		printf("%c %c %c %c", i, i, i, i);
		printf("%c %c", i, i);
		printf("hello %c la %c terre", i, i);
		printf("%c helloe la terre %c\n", i, i);
	}
	return (0);
}

