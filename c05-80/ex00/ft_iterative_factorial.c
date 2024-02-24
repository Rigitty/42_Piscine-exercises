/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:58:50 by syarar            #+#    #+#             */
/*   Updated: 2024/02/10 12:54:34 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	a;

	total = 1;
	a = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (a <= nb)
	{
		total = total * a;
		a++;
	}
	return (total);
}
