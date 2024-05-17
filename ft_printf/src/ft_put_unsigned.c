/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:29:00 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/17 16:33:12 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	count_nb(unsigned int n)
{
	int	i;

	if (n == 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_put_unsigned(unsigned int nbr)
{
	int i;

	i = count_nb(nbr);
	if (nbr > 9)
	{
		ft_put_unsigned(nbr / 10);
		ft_put_unsigned(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
	return (i);
}

// int	main()
// {
// 	ft_put_unsigned(4585);
// 	return (0);
// }