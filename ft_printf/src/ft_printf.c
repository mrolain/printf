/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:26:05 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/17 17:17:37 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static unsigned int	parser(char c, va_list arg)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'u')
		return (ft_put_unsigned(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(arg, int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_puthex(va_arg(arg, int), "0123456789ABCDEF"));
	else if (c == 'p')
		return (ft_puthex_p(va_arg(arg, void *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += parser(str[i], arg);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

// int	main()
// {
	// char	*test = "je fais des test";
	// char 	*testest = "je suis la ";
	// int		test_d = -42;
	// int		test_xX = 0;
	// printf("\n%d\n", ft_printf("\n%s", test));
	// printf("\n%d\n", ft_printf("\n%d", test_d));
	// printf("\n%d\n", ft_printf("\n%i", test_d));
	// printf("\n%d\n", ft_printf("\n%u", test_d));
	// printf("\n%d\n", ft_printf("%x", test_xX));
	// printf("\n%d\n", ft_printf("\n%X", test_xX));
	// printf("\n%d\n", ft_printf("\n%c", 'g'));
	// printf("\n%d\n", ft_printf("\n%%"));
	// printf("\n%d\n", ft_printf("\n%p", testest));
	// printf("\nprinted %d char \n", ft_printf("%i%i%i%i%i%i%i", 10, 23, -2, 37, 200, -9999, 977779));
	// printf("\nprinted %d char \n", ft_printf("%i", 10));
	// printf("\nprinted %d char \n", ft_printf("%i", 23));
	// printf("\nprinted %d char \n", ft_printf("%i", -2));
	// printf("\nprinted %d char \n", ft_printf("%i", 37));
	// printf("\nprinted %d char \n", ft_printf("%i", 200));
	// printf("\nprinted %d char \n", ft_printf("%i", -9999));
	// printf("\nprinted %d char \n", ft_printf("%i", 977779));
// 	return (0);
// }