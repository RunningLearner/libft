char	*ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			tmp = s;
		}
		s ++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return (s);
	return (tmp);
}
