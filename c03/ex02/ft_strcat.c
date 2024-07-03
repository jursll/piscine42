#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[50] = "Hello, ";
	char	b[] = "World";

	printf("%s", ft_strcat(a, b));
	return (0);
}
*/
