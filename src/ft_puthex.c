/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:42:19 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/20 13:39:21 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex(unsigned int i, char *base)
{
	unsigned int	j;

	j = 0;
	if (i >= 16)
		j += ft_puthex(i / 16, base);
	ft_putchar(base[i % 16]);
	j++;
	return (j);
}
