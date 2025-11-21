/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchti <abouchti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:36:17 by abouchti          #+#    #+#             */
/*   Updated: 2025/11/21 16:07:46 by abouchti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(int s)
{
	if (s == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	int				s;
	unsigned long	num;

	i = 0;
	s = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > (9223372036854775807UL - (str[i] - '0')) / 10)
			return (check_overflow(s));
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(num * s));
}
