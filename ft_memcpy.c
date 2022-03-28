/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:12:00 by seunam            #+#    #+#             */
/*   Updated: 2022/03/28 14:31:11 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*ddst;
	unsigned char	*ssrc;

	ddst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	idx = 0;
	while (n > 0)
	{
		ddst[idx] = ssrc[idx];
		n --;
		idx ++;
	}
	return (dst);
}
