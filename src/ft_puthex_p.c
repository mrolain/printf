/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:37:21 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/14 14:22:57 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_p(size_t i, char *base)
{
	int	j;

	j = 0;
	if (i >= 16)
		j += ft_p(i / 16, base);
	ft_putchar(base[i % 16]);
	return (j + 1);
}

int	ft_puthex_p(void *ptr)
{
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	write(1, "0x", 2);
	return (ft_p((size_t)ptr, "0123456789abcdef") + 2);
}
