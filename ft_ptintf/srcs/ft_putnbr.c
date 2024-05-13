/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:25:53 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/13 11:28:29 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev(int nb, int i, char *str)
{
	while (nb != 0)
	{
		str[i] = nb % 10 + '0';
		if (nb / 10 != 0)
			i++;
		nb /= 10;
	}
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	char	str[20];
	int		i;

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	ft_rev(nb, i, str);
}