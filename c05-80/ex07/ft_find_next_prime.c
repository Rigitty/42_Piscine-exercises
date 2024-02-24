/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:52:24 by syarar            #+#    #+#             */
/*   Updated: 2024/02/10 16:52:21 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	r;
	int	i;

	r = 1;
	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (r);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			r = 0;
		i++;
	}
	return (r);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (ft_is_prime(nb) != 1)
		nb++;
	return (ft_find_next_prime(nb));
}
