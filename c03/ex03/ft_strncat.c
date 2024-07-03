#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[50] = "Hello, ";
	char	b[9] = "Hello, ";
	char	c[] = "World !";
	unsigned int	x = 2;

	printf("%s\n", ft_strncat(a, c, x));
	printf("%s", ft_strncat(b, c, x));
	return (0);
}
*/
