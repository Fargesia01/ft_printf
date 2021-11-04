/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slott <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:26:40 by slott             #+#    #+#             */
/*   Updated: 2021/11/03 14:04:15 by slott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunint(unsigned int n, int c)
{
	if (n >= 10)
	{
		c = ft_putunint(n / 10, c + 1);
		ft_putchar(n % 10 + '0', 0);
	}
	else
		c = ft_putchar(n + '0', c);
	return (c);
}
