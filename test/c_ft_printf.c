/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_ft_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:48:43 by engooh            #+#    #+#             */
/*   Updated: 2021/12/17 11:16:22 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	printf("%d\n", ft_printf(" %c ", '0'));
	printf("%d\n",ft_printf("%c", '0'));
	printf("%d\n",ft_printf(" %c ", '0'));
	printf("%d\n", ft_printf(" %c", '0' - 256));
	printf("%d\n", ft_printf("%c ", '0' + 256));
	printf("%d\n", ft_printf(" %c %c %c ", '0', 0, '1'));
	printf("%d\n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
	printf("%d\n", ft_printf(" %c %c %c ", '1', '2', '3'));
	printf("%d\n", ft_printf(" %c %c %c ", '2', '1', 0));
	printf("%d\n", ft_printf(" %c %c %c ", 0, '1', '2'));
	printf("_____________________________\n");
	printf("%d\n", printf(" %c ", '0'));
	printf("%d\n",printf("%c", '0'));
	printf("%d\n",printf(" %c ", '0'));
	printf("%d\n",printf(" %c", '0' - 256));
	printf("%d\n",printf("%c ", '0' + 256));
	printf("%d\n",printf(" %c %c %c ", '0', 0, '1'));
	printf("%d\n",printf(" %c %c %c ", ' ', ' ', ' '));
	printf("%d\n",printf(" %c %c %c ", '1', '2', '3'));
	printf("%d\n",printf(" %c %c %c ", '2', '1', 0));
	printf("%d\n",printf(" %c %c %c ", 0, '1', '2'));


	/*i = 32;
	while (++i < 128)
	{
		ft_printf("%c\n", i);
		ft_printf("%c %c %c %c\n", i, i, i, i);
		ft_printf("%c %c\n", i, i);
		ft_printf("hello %c la %c terre\n", i, i);
		ft_printf("%c helloe la terre %c\n", i, i);
	}*/
	return (0);
}
