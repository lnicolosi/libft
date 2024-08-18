/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:24:06 by lnicolos          #+#    #+#             */
/*   Updated: 2023/11/16 18:26:08 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_nbr(int n)
{
	int				i;
	long long int	lli;

	lli = n;
	if (lli < 0)
		lli *= -1;
	i = 0;
	while (lli > 9)
	{
		lli /= 10;
		i++;
	}
	i++;
	return (i);
}

int	is_negativ(int n)
{
	int		i;

	if (n < 0)
		i = 1;
	else
		i = 0;
	return (i);
}

char	*set_str(int n, char *str)
{
	int				i;
	long long int	x;
	long long int	lli;

	lli = n;
	x = n;
	i = (digit_nbr(lli) + is_negativ(lli));
	if (is_negativ(lli))
		lli *= -1;
	while (i >= is_negativ(lli))
	{
		if (i == (digit_nbr(lli) + is_negativ(x)))
			str[i] = '\0';
		else
		{
			str[i] = (lli % 10) + 48;
			lli /= 10;
		}
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	char			*str_zero;
	long long int	i;

	i = n;
	if (i == 0)
	{
		str_zero = (char *)malloc(2);
		if (str_zero == NULL)
			return (NULL);
		str_zero[0] = '0';
		str_zero[1] = '\0';
		return (str_zero);
	}
	str = (char *)malloc((digit_nbr(i) * (sizeof(char)) + (1 + is_negativ(i))));
	if (str == NULL)
		return (NULL);
	set_str(i, str);
	if (is_negativ(i))
		str[0] = '-';
	return (str);
}
