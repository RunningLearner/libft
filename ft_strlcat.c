/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:43 by seunam            #+#    #+#             */
/*   Updated: 2022/03/23 19:29:29 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	srclen;
	size_t	dstlen;

	srclen = 0;
	while (src[srclen])
		srclen ++;
	dstlen = 0;
	while (dst[dstlen])
		dstlen ++;
	if (dstsize < dstlen)
		return (srclen + dstsize);
	idx = 0;
	while (src[idx] && idx + dstlen < dstsize + 1)
	{
		dst[dstlen + idx] = src[idx];
		idx ++;
	}
	dst[idx] = 0;
	return (srclen + dstlen);
}
