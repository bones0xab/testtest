/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:24:51 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/21 15:42:36 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_mot;

	last_mot = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_mot = (char *)s;
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (last_mot);
}
