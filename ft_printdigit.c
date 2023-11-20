/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:44:32 by faneves           #+#    #+#             */
/*   Updated: 2023/11/20 14:37:15 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


//p inicia com 0x e tem o numero na base hexadecimal
//d e i numero normal na base decimal
//u somente numeros positivos e inteiros, base decimal
//x e X: base hexadecimal


//hexadecimal

void	ft_printdigit(long n, int base)
{
	char	*str;
	int	count;

	str = "0123456789abcdef"
	if (n < 0)
	if (n >= 10)
	{
		ft_putnbr_fd(n / base);
		ft_putnbr_fd(n % base);
	}
	else
		ft_putchar_fd(str[n]);
}

//decimal

void	ft_printdigit(int n, int base)
{
	char	*str;

	str = "0123456789"
	if (n >= 10)
	{
		ft_putnbr_fd(n / base);
		ft_putnbr_fd(n % base);
	}
	else
		ft_putchar_fd(str[n]);
}

//hexadecimal X
