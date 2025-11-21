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

char	*ft_strnstr(const char *haystack, const char *need_le, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)need_le;
	i = 0;
	j = 0;
	if (need_le[0] == '\0')
		return (h);
	while (i < len && h[i])
	{
		while (h[i + j] == n[j] && n[j] && i + j < len)
		{
			j++;
		}
		if (n[j] == '\0')
			return (h + i);
		j = 0;
		i++;
	}
	return (NULL);
}
