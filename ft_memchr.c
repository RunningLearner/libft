/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:43:39 by seunam            #+#    #+#             */
/*   Updated: 2022/03/18 17:43:56 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n && s[idx] != 0)
	{
		if ((unsigned char)s[idx] == (unsigned char)c)
			return (&s[idx]);
		idx ++;
	}
	return (0);
}
