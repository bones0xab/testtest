/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:43:46 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/21 15:45:50 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *str, char sep)
{
	int	i;
	int	is_word;
	int	count;

	i = 0;
	is_word = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep)
			is_word = 0;
		else if (is_word == 0)
		{
			count++;
			is_word = 1;
		}
		i++;
	}
	return (count);
}

static int	wordlen(char const *str, char sep)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	return (len);
}

static void	free_mots(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
}

static int	fillwords(char **res, const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = wordlen(s, c);
			res[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (!res[i])
			{
				free_mots(res, i);
				return (0);
			}
			ft_memcpy(res[i], s, len);
			res[i][len] = '\0';
			i++;
			s += len;
		}
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		mots;
	char	**res;

	if (!s)
		return (NULL);
	mots = countwords(s, c);
	res = (char **)malloc(sizeof(char *) * (mots + 1));
	if (!res)
		return (NULL);
	if (!fillwords(res, s, c))
		return (NULL);
	return (res);
}
