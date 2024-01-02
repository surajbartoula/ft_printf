/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 20:17:12 by sbartoul          #+#    #+#             */
/*   Updated: 2023/12/26 14:55:32 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		negative;
	long	index;

	negative = 0;
	index = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		index *= 10;
		index += *str - 48;
		str++;
	}
	if (!(negative % 2))
		return (index);
	else
		return (-index);
}
