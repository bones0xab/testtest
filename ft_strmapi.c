/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:46:04 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/21 09:58:33 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		j;
	char	*res;

	j = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (j < len)
	{
		res[j] = (*f)(j, s[j]);
		j++;
	}
	return (res);
}
