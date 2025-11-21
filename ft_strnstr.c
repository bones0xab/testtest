/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:17:38 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/21 10:18:12 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	j;

	if (!s || !to_find)
		return (NULL);
	if ((!*s && !*to_find) || (!*to_find && !n))
		return ((char *)s);
	i = 0;
	while (s[i] && i < n)
	{
		j = i;
		k = 0;
		while (s[j] == to_find[k] && s[j] && j < n)
		{
			j++;
			k++;
		}
		if (to_find[k] == '\0')
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
