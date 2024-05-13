/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:29:00 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/13 12:53:23 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include <stdlib.h>

size_t	count_nb(unsigned int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_put_unsigned(unsigned int nbr)
{
	int	i;
	char	*str;

	i = count_nb(nbr);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return ;
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
}

// int	main()
// {
// 	ft_put_unsigned(4585);
// 	return (0);
// }