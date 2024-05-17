/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:42:19 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/17 18:33:52 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex(int i, char *base)
{
	int	j;

	if (i >= 16)
		ft_puthex(i / 16, base);
	ft_putchar(base[i % 16]);
	return (j);
}
