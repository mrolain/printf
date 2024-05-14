/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:25:53 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/14 16:20:51 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		i++;
	}
	
}
