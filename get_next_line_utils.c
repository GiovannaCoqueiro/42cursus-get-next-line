#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	src_len;

	src_len = ft_strlen(src);
	count = 0;
	if (size > 0)
	{
		while (count < size - 1 && src[count] != '\0')
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s1_len;
	size_t	s2_len;
	int		count;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	count = -1;
	while (s1[++count] != '\0')
		dest[count] = s1[count];
	count = -1;
	while (s2[++count] != '\0')
		dest[count + s1_len] = s2[count];
	dest[count + s1_len] = '\0';
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	int		count;

	count = -1;
	while (s[++count] != '\0')
		if (s[count] == (unsigned char)c)
			return ((char *)&s[count]);
	if ((unsigned char)c == '\0')
		return ((char *)&s[count]);
	return (0);
}
