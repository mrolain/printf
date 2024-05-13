/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:26:05 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/13 17:23:24 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdarg.h>

int	sorting()

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;

	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%' && str[i - 1] != '%')
			ft_putchar(str[i]);
		if (str[i] == '%')
		{
			if	(str[i + 1] == '%')
				ft_putchar('%');
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				ft_putnbr(va_arg(arg, int));
			else if (str[i + 1] == 'c')
				ft_putchar(va_arg(arg, int));
			else if (str[i + 1] == 's')
				ft_putstr(va_arg(arg, char *));
			else if (str[i + 1] == 'u')
				ft_put_unsigned(va_arg(arg, unsigned int));
			else if (str[i + 1] == 'x')
				ft_puthex(va_arg(arg, int), "0123456789abcdef");
			else if (str[i + 1] == 'X')
				ft_puthex(va_arg(arg, int), "0123456789ABCDEF");
			else if (str[i + 1] == 'p')
			{
				write(1, '0x', 2);
				ft_puthex((int)(va_arg(arg, void *)), "0123456789abcdef");				
			}
		}
		i++;
	}	
	return (0);
}

int	main()
{
	ft_printf("je suis %s\n et je fais %X %s", "a 42", 4005, "test");
	return (0);
}