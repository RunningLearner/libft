/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:25:20 by seunam            #+#    #+#             */
/*   Updated: 2022/03/23 18:35:09 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	srclen;

	srclen = 0;
	while (src[srclen])
		srclen ++;
	idx = 0;
	while (idx < srclen && idx < dstsize - 1)
	{
		dst[idx] = src[idx];
		idx ++;
	}
	if (dstsize > 0)
		dst[idx] = 0;
	return (srclen);
}
