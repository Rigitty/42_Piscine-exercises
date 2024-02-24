/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:39:42 by syarar            #+#    #+#             */
/*   Updated: 2024/02/05 14:40:39 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	temp;
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		temp = s1[i] - s2[i];
		total = total + temp;
		if (total != 0)
		{
			return (total);
		}
		i++;
	}
	return (total);
}
