/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:41:19 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/20 23:20:34 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst_t;
	const unsigned char	*src_t;
	size_t				i;

	if (!n || dest == src)
		return (dest);
	dst_t = (unsigned char *)dest;
	src_t = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_t[i] = src_t[i];
		i++;
	}
	return (dest);
}
