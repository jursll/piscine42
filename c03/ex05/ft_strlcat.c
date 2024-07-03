#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	i;

	i_dest = 0;
	i_src = 0;
	while ((dest[i_dest] != '\0') || (src[i_src] != '\0'))
	{
		i_dest++;
		i_src++;
	}
	if (size <= i_dest)
	{
		return (size + i_src);
	}
	i = 0;
	while ((src[i] != '\0') && ((i_dest + i) < (size - 1)))
	{
		dest[i_dest + i] = src[i];
		i++;
	}
	dest[i_dest + i] = '\0';
	return (i_dest + i_src);
}
/*
int	main(void)
{
	char	a[20] = "Hello, ";
	char	b[] = "World";
	unsigned int	x = 20;

	printf("%d", ft_strlcat(a, b, x));
	return (0);
}
*/
