/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:52:08 by syarar            #+#    #+#             */
/*   Updated: 2024/02/08 14:04:44 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	findlen(char *to_find)
{
	int	len;

	len = 0;
	while (to_find[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;
	int	count;

	i = 0;
	len = 0;
	count = 0;
	len = findlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[count])
			count++;
		else
			count = 0;
		if (count == len)
			return (str + i - count + 1);
		i++;
	}
	return (0);
}
