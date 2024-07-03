#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hello";
	char	c[] = "World";
	char	d[] = "Hella";
	char	e[] = "Hello World";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
	printf("%d\n", ft_strcmp(a, d));
	printf("%d", ft_strcmp(a, e));
	return (0);
}
*/
