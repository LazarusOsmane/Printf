/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ft_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:20:31 by engooh            #+#    #+#             */
/*   Updated: 2021/12/17 11:45:13 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ft_printf.h"

int	main(void)
{
	char	*s2;
	char	*s3;

	s3 = NULL;
	s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	/*ft_printf("%s", "");
	ft_printf(" %s", "");
	ft_printf("%s ", "");
	ft_printf(" %s ", "");
	ft_printf(" %s ", "-");
	ft_printf(" %s %s ", "", "-");
	ft_printf(" %s %s ", " - ", "");
	ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "); */
	ft_printf(" NULL %s NULL ", s3);
	printf("\n_________________________________\n");
	/*printf("%s", "");
	printf(" %s", "");
	printf("%s ", "");
	printf(" %s ", "");
	printf(" %s ", "-");
	printf(" %s %s ", "", "-");
	printf(" %s %s ", " - ", "");
	printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");*/
	printf(" NULL %s NULL ", (NULL));
	return (0);
}
