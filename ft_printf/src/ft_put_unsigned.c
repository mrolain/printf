/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:29:00 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/14 14:30:11 by mrolain          ###   ########.fr       */
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
	return (i);
}

int	ft_put_unsigned(unsigned int nbr)
{
	int		i;
	int		j;
	char	*str;

	i = count_nb(nbr);
	j = count_nb(nbr);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	ft_putstr(str);
	free(str);
	return (j);
}

// int	main()
// {
// 	ft_put_unsigned(4585);
// 	return (0);
// }