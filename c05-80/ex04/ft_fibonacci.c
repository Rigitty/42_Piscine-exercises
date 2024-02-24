/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:36:20 by syarar            #+#    #+#             */
/*   Updated: 2024/02/10 18:45:22 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	total;

	total = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index > 2)
	{
		total = ft_fibonacci (index - 1) + ft_fibonacci (index - 2);
	}
	return (total);
}
