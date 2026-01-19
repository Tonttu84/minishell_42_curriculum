#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	unsigned int	i;
	char			*rtrn;

	if (!c)
		return (s + ft_strlen(s));
	rtrn = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			rtrn = &s[i];
		i++;
	}
	return (rtrn);
}
