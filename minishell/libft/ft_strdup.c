#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s);
	str = ft_xcalloc(i + 1, sizeof "");
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}
