/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:46:20 by seunam            #+#    #+#             */
/*   Updated: 2022/03/18 17:46:21 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	size_t	idx2;

	if (little == 0)
		return (big);
	idx = 0;
	while (big[idx] && idx < len)
	{
		idx2 = 0;
		while (big[idx + idx2] == little[idx2] && idx + idx2 < len)
		{
			idx2 ++;
			if (little[idx2] == 0)
				return (&big[idx]);
		}
		idx ++;
	}
	return (0);
}
