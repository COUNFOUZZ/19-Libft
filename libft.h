#ifndef libft_h
#   define libf_h

#include <stdlib.h>

int	    ft_isalnum(int c);
int	    ft_isalpha(int c);
int	    ft_isascii(int c);
int	    ft_isdigit(int c);
int	    ft_isprint(int c);
int	    ft_tolower(int c);
int	    ft_toupper(int c);
char    *ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);

#endif