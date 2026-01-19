#include "libft.h"

t_ldiv	ft_ldiv(long nbr, unsigned int base)
{
	t_ldiv	result;

	result.quot = nbr / base;
	result.rem = nbr % base;
	return (result);
}
