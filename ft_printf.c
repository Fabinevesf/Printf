/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:22:21 by faneves           #+#    #+#             */
/*   Updated: 2023/11/20 14:10:57 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	count;
	
	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1)
		++format;
	}
	va_end(ap);
	return (count);
}

int	print_format(char specifier, va_list ap)
{
	int	count;
	
	count = 0;
	if (specifier == 'c')
		count += ft_printchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (specifier == 'p' || 'X' || 'x')
		count += ft_printdigit(va_arg(ap, int), 16);
	else if (specifier == 'd' || 'u' || 'i')
		count += ft_printdigit(va_arg(ap, int), 10);
	else (specifier == '%')
		count += write(1, &specifier, 1);
}
