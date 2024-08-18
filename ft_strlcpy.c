/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:27:15 by lnicolos          #+#    #+#             */
/*   Updated: 2023/12/07 11:11:38 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < destsize)
	{
		*dest++ = *src++;
		++i;
	}
	if (i < destsize)
		*dest = 0;
	while (*src++)
		++i;
	return (i);
}
