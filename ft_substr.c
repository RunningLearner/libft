/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:46:33 by seunam            #+#    #+#             */
/*   Updated: 2022/03/18 17:46:37 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	idx;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) *( + 1));
	if (!str)
		return (NULL);
	idx = 0;
	while (s[idx + start])
	{
		str[idx] = s[start + idx]; 
		idx ++;
		if (idx < len)
			break;
	}
	str[idx] = 0;
	return (str);
}
