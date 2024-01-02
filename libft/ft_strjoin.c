/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:36:01 by sbartoul          #+#    #+#             */
/*   Updated: 2023/12/23 13:39:17 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;
	size_t	totallen;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (ft_strdup(""));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	totallen = s1len + s2len;
	str = (char *)malloc(sizeof(char) * (totallen + 1));
	if (!str)
		return (0);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
