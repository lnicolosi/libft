/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:54:43 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/09 15:57:50 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*x1;
	const unsigned char	*x2;

	i = 0;
	x1 = (const unsigned char *) s1;
	x2 = (const unsigned char *) s2;
	while (i < n && (x1[i] == x2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	return (x1[i] - x2[i]);
}
