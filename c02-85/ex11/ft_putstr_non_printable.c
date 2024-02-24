/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarar <syarar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 08:41:20 by syarar            #+#    #+#             */
/*   Updated: 2024/02/02 09:04:19 by syarar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	whexa(char a)
{
	int	t;

	t = 92;
	write (1, &t, 1);
	t = a / 16;
	if (t > 9)
	{
		t = t + 87;
	}
	else
	{
		t = t + 48;
	}
	write (1, &t, 1);
	t = a % 16;
	if (t > 9)
	{
		t = t + 87;
	}
	else
	{
		t = t + 48;
	}
	write (1, &t, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 & str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			whexa(str[i]);
		}
		i++;
	}
}
