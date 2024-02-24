/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:40:15 by syarar            #+#    #+#             */
/*   Updated: 2024/02/05 15:42:07 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[h] != '\0' && nb > 0)
	{
		dest[i] = src[h];
		i++;
		h++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
