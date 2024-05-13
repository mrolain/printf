/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:42:19 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/13 17:13:30 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_puthex(int i, char *base)
{
	if (i >= 16)
		ft_puthex(i / 16, base);
	ft_putchar(base[i % 16]);
	
}