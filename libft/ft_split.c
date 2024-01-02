/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 11:11:59 by sbartoul          #+#    #+#             */
/*   Updated: 2023/12/25 16:35:53 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_worldlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_countstr(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (i > 0 && str[i] && str[i - 1] == c)
			count++;
		if (str[i])
			i++;
	}
	if (count == 0 && str[i -1] == c)
		return (0);
	if (str[0] != c)
		count++;
	return (count);
}

static char	*ft_word(char const *str, char c)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = ft_worldlen(str, c);
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	i = 0;
	if (!s)
		return (0);
	strings = (char **)malloc(sizeof(char *) * (ft_countstr(s, c) + 1));
	if (!strings)
		return (0);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			strings[i] = ft_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	strings[i] = 0;
	return (strings);
}
