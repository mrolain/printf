/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:15:47 by mrolain           #+#    #+#             */
/*   Updated: 2024/05/14 14:24:26 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_put_unsigned(unsigned int nbr);
int	ft_puthex(int i, char *base);
int	ft_puthex_p(void *ptr);

#endif