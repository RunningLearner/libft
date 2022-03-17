char	*ft_strchar(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return (s);
		s ++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return (s);
	return (0);
}
