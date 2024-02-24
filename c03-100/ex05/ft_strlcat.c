/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:53:33 by syarar            #+#    #+#             */
/*   Updated: 2024/02/08 14:01:42 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	findlen(char *to_find)
{
	int	len;

	len = 0;
	while (to_find[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	i;
	unsigned int	h;
	unsigned int	f;

	i = 0;
	h = 0;
	lensrc = findlen(src);
	lendest = findlen(dest);
	f = lendest;
	if (size <= lendest)
	{
		return (size + lensrc);
	}
	while (src[i] != '\0' && i < size - lendest - 1)
	{
		dest[f] = src[i];
		i++;
		f++;
	}
	dest[f] = '\0';
	return (lensrc + lendest);
}
