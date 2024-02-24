/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:18:03 by syarar            #+#    #+#             */
/*   Updated: 2024/02/06 15:20:19 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		a = nb;
		a = a * -1;
		write (1, "-", 1);
		ft_putnbr(a);
	}
	else if (nb < 10)
	{
		a = nb + '0';
		write (1, &a, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		a = nb % 10 + '0';
		write (1, &a, 1);
	}
}
