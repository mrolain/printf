/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:42:19 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/14 14:23:01 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	count_nb(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i - 1);
}

int	ft_puthex(int i, char *base)
{
	int	j;

	j = count_nb((unsigned int) i);
	if (i >= 16)
		ft_puthex(i / 16, base);
	ft_putchar(base[i % 16]);
	return (j);
}
