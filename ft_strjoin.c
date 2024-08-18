/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:18:35 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/17 10:24:18 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*chaine;

	i = 0;
	j = 0;
	chaine = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof (char));
	if (chaine == NULL)
		return (NULL);
	while (s1[i])
	{
		chaine[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		chaine[i] = s2[j];
		j++;
		i++;
	}
	chaine[i] = '\0';
	return (chaine);
}
