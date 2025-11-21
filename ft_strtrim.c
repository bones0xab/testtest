/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:46:47 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/21 09:58:14 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	first;
	size_t	len;
	size_t	last;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1) - 1;
	while (s1[first] && is_char_in_set(set, s1[first]))
		first++;
	if (first > last)
		return (ft_strdup(""));
	while (last > first && is_char_in_set(set, s1[last]))
		last--;
	len = last - first + 1;
	newstr = ft_calloc(len + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1 + first, len);
	return (newstr);
}
