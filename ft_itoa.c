/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:40:21 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/21 15:55:19 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	reverse_str(char *s)
{
	char	*e;
	char	tmp;

	if (*s == '-')
		s++;
	e = s;
	while (*e)
		e++;
	e--;
	while (s < e)
	{
		tmp = *s;
		*s++ = *e;
		*e-- = tmp;
	}
}

char	*ft_itoa(int n)
{
	char			*out;
	unsigned int	val;
	int				i;

	out = malloc(sizeof(char) * (len_nbr(n) + 1));
	if (!out)
		return (NULL);
	i = 0;
	if (n < 0)
		val = -n;
	else
		val = n;
	if (n == 0)
		out[i++] = '0';
	if (n < 0)
		out[i++] = '-';
	while (val)
	{
		out[i++] = (val % 10) + '0';
		val /= 10;
	}
	out[i] = '\0';
	reverse_str(out);
	return (out);
}
