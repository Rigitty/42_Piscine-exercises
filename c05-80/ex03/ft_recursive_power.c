/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:36:32 by syarar            #+#    #+#             */
/*   Updated: 2024/02/10 12:55:14 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	total;
	int	i;

	total = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	if (i < power)
	{
		total = nb * ft_recursive_power(nb, power - 1);
	}
	return (total);
}
