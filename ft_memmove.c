/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:41:34 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/20 23:21:20 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_pt;
	const unsigned char	*src_pt;

	dst_pt = (unsigned char *)dst;
	src_pt = (const unsigned char *)src;
	if (dst_pt == src_pt || len == 0)
		return (dst);
	if (dst_pt < src_pt)
	{
		while (len--)
			*dst_pt++ = *src_pt++;
	}
	else
	{
		dst_pt += len;
		src_pt += len;
		while (len--)
			*(--dst_pt) = *(--src_pt);
	}
	return (dst);
}
