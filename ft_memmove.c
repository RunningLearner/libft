/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:20:17 by seunam            #+#    #+#             */
/*   Updated: 2022/03/28 14:31:25 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			idx;
	unsigned char	*ddst;
	unsigned char	*ssrc;

	ddst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	idx = 0;
	if (src > dst)
	{
		while (idx < len)
		{
			ddst[idx] = ssrc[idx];
			idx ++;
		}
	}
	else
	{
		while (len)
		{
			ddst[len - 1] = ssrc[len - 1];
			len --;
		}
	}
	return (dst);
}
