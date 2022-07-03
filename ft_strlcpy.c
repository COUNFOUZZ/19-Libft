#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	if (!src || !dest)
		return (0);
	j = ft_strlen(src);
	if (size <= 0)
		return (j);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
