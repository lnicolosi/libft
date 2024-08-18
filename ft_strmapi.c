/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:16:17 by lnicolos          #+#    #+#             */
/*   Updated: 2023/12/07 10:16:28 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*retour;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	retour = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (retour == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		retour[i] = f(i, s[i]);
		i++;
	}
	retour[i] = '\0';
	return (retour);
}
