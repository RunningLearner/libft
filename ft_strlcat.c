/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:43 by seunam            #+#    #+#             */
/*   Updated: 2022/03/14 16:57:21 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	idx;
	size_t	srclen;
	size_t	dstlen;

	srclen = 0;
	while (src[srclen])
		srclen ++;
	while (dst[dstlen])
		dstlen ++;
	idx = 0;
	if (dstsize < dstlen)
		return (srclen + dstsize);
	while (idx < dstsize)
	{
	}
	return (srclen + dstlen);
}
