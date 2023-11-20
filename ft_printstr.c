/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:42:08 by faneves           #+#    #+#             */
/*   Updated: 2023/11/13 18:32:42 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	count;

	count = 0;
	if (*str == '\0')
		return (ft_printstr("NULL"));
	while (*str != '\0')
	{
		ft_printchar(str[count]);
		count++;
	}
	return (count);
}

int	main(void)
{
	printf("%x %d\n", -42, -42);
	return (0);
}
