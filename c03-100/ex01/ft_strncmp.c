/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:19:27 by syarar            #+#    #+#             */
/*   Updated: 2024/02/06 14:31:56 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	temp;
	unsigned int	total;

	i = 0;
	total = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
