#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (!dst || !src)
		return (0);
	j = ft_strlen(src);
	while (dstsize <= 0)
		return (j);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
