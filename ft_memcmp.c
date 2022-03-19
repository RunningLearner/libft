/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:44:24 by seunam            #+#    #+#             */
/*   Updated: 2022/03/18 17:44:36 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;

	if (n == 0)
		return (0);
	while (idx < n)
	{
		if (s1[idx] != s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx ++;	
	}
	return (0);
}
