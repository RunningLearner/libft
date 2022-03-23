/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:19:58 by seunam            #+#    #+#             */
/*   Updated: 2022/03/23 18:59:03 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len ++;
	return (len);
}

static size_t	find_start(char *s1, char *set)
{
	size_t	start;
	size_t	idx;

	start = 0;
	if (!set)
		return (start);
	while (s1[start])
	{
		idx = 0;
		while (set[idx])
		{
			if (!(s1[start] == set[idx]))
				return (start);
			idx ++;
		}
		start ++;
	}
	return (0);
}

static size_t	find_end(char *s1, char *set)
{
	size_t	end;
	size_t	idx;

	end = ft_strlen_(s1) - 1;
	if (!set)
		return (end);
	while (s1[end])
	{
		idx = 0;
		while (set[idx])
		{
			if (!(s1[end] == set[idx]))
				return (end);
			idx ++;
		}
		end --;
	}
	return (end);
}

static char	*alltrim()
{
	char	*str;

	str = (char *)malloc(1);
	*str = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	idx;

	if (!s1)
		return (NULL);
	start = find_start((char *)s1, (char *)set);
	end = find_end((char *)s1, (char *)set);
	if (end < start)
		return (alltrim());
	str = (char *)malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (NULL);
	idx = 0;
	while (idx < (end - start + 1))
	{
		str[idx] = s1[start + idx];
		idx ++;
	}
	str[idx] = 0;
	return (str);
}
