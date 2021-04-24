#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t one;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(s1, *s1))
		s1++;
	one = ft_strlen(s1);
	while (one && ft_strchr(set, s1[one]))
		one--;
	str = ft_substr((char *)s1, 0, one +1);
	return (str);
}

int main()
{
	char *s1 = "1111111222222221111111";
	char *set = "1";

	printf("%s", ft_strtrim(s1, set));
}