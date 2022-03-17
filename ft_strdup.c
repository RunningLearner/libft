#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	idx;

	while (s[len])
		len ++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if(!(dup))
		return (NULL);
	while (s[idx])
	{
		dup[idx] = s[idx];
		idx ++;
	}
	dup[idx] = 0;
	return (dup);
}
