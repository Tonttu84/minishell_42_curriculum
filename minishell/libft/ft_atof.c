
#include "libft.h"

double	ft_atof(const char *s)
{
	char	*ptr;
	double	new;
	double	mantissa;

	if (!s)
		return (0.);
	ptr = ft_strchr(s, '.');
	new = ft_atoi(s);
	if (!ptr)
		return (new);
	mantissa = ft_atoi(ptr + 1);
	while (mantissa >= 1)
		mantissa *= 0.1;
	if (new > 0)
		return (new + mantissa);
	return (new - mantissa);
}
