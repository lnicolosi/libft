/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:01:25 by lnicolos          #+#    #+#             */
/*   Updated: 2023/12/07 13:18:05 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numwords(char const *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			cpt++;
		i++;
	}
	return (cpt);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int		debut;
	int		fin;

	debut = 0;
	fin = 0;
	while (s[fin])
	{
		if (s[fin] == c || s[fin] == 0)
			debut = fin + 1;
		if (s[fin] != c && (s[fin + 1] == c || s[fin + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (fin - debut + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + debut), fin - debut + 2);
			word++;
		}
		fin++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
}
