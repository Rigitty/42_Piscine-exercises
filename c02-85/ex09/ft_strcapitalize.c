/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:29:55 by syarar            #+#    #+#             */
/*   Updated: 2024/02/02 09:00:19 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	candm(char *str, int i)
{
	if ((str[i + 1] <= 122 && str[i + 1] >= 97))
	{
		if (str[i] >= 0 && str[i] <= 47)
		{
			str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] >= 58 && str[i] <= 64)
		{
			str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] >= 91 && str[i] <= 96)
		{
			str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] >= 123 && str[i] <= 127)
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	if (str[i] <= 122 && str[i] >= 97)
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		candm(str, i);
		i++;
	}
	return (str);
}
