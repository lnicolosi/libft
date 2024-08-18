/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:59:08 by lnicolos          #+#    #+#             */
/*   Updated: 2023/12/07 10:42:32 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*copie;

	size = ft_strlen(s);
	copie = (char *)malloc(size * sizeof(char) + 1);
	if (copie == NULL)
		return (0);
	ft_memcpy(copie, s, size);
	copie[size] = '\0';
	return (copie);
}
