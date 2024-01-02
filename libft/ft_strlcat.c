/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:47:21 by sbartoul          #+#    #+#             */
/*   Updated: 2023/12/21 18:15:23 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	si;
	size_t	srcsize;

	i = 0;
	si = 0;
	if ((!src || !dest) && !len)
		return (0);
	srcsize = ft_strlen(src);
	while (dest[i] && i < len)
		i++;
	while (src[si] && (i + si + 1) < len)
	{
		dest[i + si] = src[si];
		si++;
	}
	if (i < len)
		dest[i + si] = '\0';
	return (i + srcsize);
}
