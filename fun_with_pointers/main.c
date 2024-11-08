#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


size_t	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strdup(const char *str)
{
	char		*ptr;
	size_t		len;
	size_t		index;

	len = ft_strlen(str);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	index = 0;
	if (ptr == NULL)
		return (NULL);
	while (index < len)
	{
		ptr[index] = str[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
} 

int main(int ac, char** av)
{
	if (ac == 0)
		return 0;

	printf("%s\n", av[1]);
	printf("%s\n", av[2]);

	int j = 0;
	while (j < 20){
		printf("%c ", av[0][j++]);
	}
	printf("\n");
	
	av[1] = ft_strdup("CHURCH");

	printf("After strdup: %s\n", av[1]);
	printf("After strdup: %s\n", av[2]);

	j = 0;
	while (j < 20){
		printf("%c ", av[0][j++]);
	}
	printf("\n");

	// printf("%s\n", av[0]);
	// printf("%s\n", av[1]);
	// printf("%s\n", av[2]);
	// char a = 1;
	// char b = 0;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 1;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 2;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 3;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 4;
	// printf("%d %d: %c\n", a, b, av[a][b]);

	// a = 2;
	// b = 0;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 1;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 2;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 3;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 4;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 5;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 6;
	// printf("%d %d: %c\n", a, b, av[a][b]);


	// printf("\n\nstrings\n");
	// printf("%d: %s\n", 1, av[1]);
	// printf("%d: %s\n", 2, av[2]);
	
	// if (av[1][4] == '\0')
	// 	printf("True");

	// printf("Set av[1][2] and av[1][3] to null terminating char\n");
	// av[1][2] = '\0';
	// av[1][3] = '\0';

	// printf("\n\nstrings\n");
	// printf("%d: %s\n", 1, av[1]);
	// printf("%d: %s\n", 2, av[2]);

	// a = 1;
	// b = 0;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 1;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 2;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 3;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 4;
	// printf("%d %d: %c\n", a, b, av[a][b]);

	// a = 2;
	// b = 0;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 1;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 2;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 3;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 4;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 5;
	// printf("%d %d: %c\n", a, b, av[a][b]);
	// b = 6;
	// printf("%d %d: %c\n", a, b, av[a][b]);

	// printf("\n\n Using pointers: strings\n");
	// printf("ptr %d: %s\n", 0, *av);
	// av++;
	// printf("ptr %d: %s\n", 1, *av);
	// av++;
	// printf("ptr %d: %s\n", 2, *av);
	// printf("Reset av\n");
	// av--;
	// printf("ptr %d: %s\n", 1, *av);
	// av--;
	// printf("ptr %d: %s\n", 0, *av);

	// printf("\n\nUse pointers to increment char\n");
	// av++;
	// int i = 0;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);

	// i = 1;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	// av[i]++;
	// printf("*av[%d]: %c\n", i, *av[i]);
	return 0;
}
