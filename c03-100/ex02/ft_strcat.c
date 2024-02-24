/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:32:12 by syarar            #+#    #+#             */
/*   Updated: 2024/02/08 10:55:20 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[h] != '\0')
	{
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';
	return (dest);
}
