/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:58:37 by seunam            #+#    #+#             */
/*   Updated: 2022/04/07 15:13:58 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s, char c)
{
	size_t	cnt;
	size_t	idx;

	idx = 0;
	cnt = 0;
	while (s[idx])
	{
		if (s[idx] != c && idx == 0)
			cnt ++;
		if (s[idx] == c)
		{
			if (s[idx + 1] != c && s[idx + 1])
				cnt ++;
		}
		idx ++;
	}
	return (cnt);
}

static char	*put_word(char *s, char c, size_t sidx)
{
	char	*str;
	size_t	idx;

	idx = 0;
	while (s[sidx + idx] && s[sidx + idx] != c)
		idx ++;
	str = malloc(sizeof(char) * (idx + 1));
	if (!str)
		return (NULL);
	idx = 0;
	while (s[sidx + idx] && s[sidx + idx] != c)
	{
		str[idx] = s[sidx + idx];
		idx ++;
	}
	str[idx] = 0;
	return (str);
}

static char	**mal_error(char **str)
{
	size_t	idx;

	idx = 0;
	while (str[idx])
	{
		free(str[idx]);
		idx ++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	sidx;
	size_t	stridx;

	str = malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!str)
		return (NULL);
	sidx = 0;
	stridx = 0;
	while (s[sidx])
	{
		if (s[sidx] != c && sidx == 0)
			str[stridx++] = put_word((char *)s, c, sidx);
		if (s[sidx] == c)
		{
			if (s[sidx + 1] != c && s[sidx + 1])
				str[stridx++] = put_word((char *)s, c, sidx + 1);
		}
		if (stridx >= 1 && !str[stridx - 1])
			return (mal_error(str));
		sidx ++;
	}
	str[stridx] = NULL;
	return (str);
}
