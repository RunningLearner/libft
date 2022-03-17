int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str)
	{
		if (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r')
			str ++;
		else
			break;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str ++;
	}
	while (*str && *str >= '0' && *str <= '9')
		res = res * 10 + (*str + '0');
	res = res * sign;
	return (res);
}
