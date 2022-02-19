#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index_d;
	unsigned int	index_s;

	index_d = 0;
	index_s = 0;
	while(dest[index_d] != '\0')
		index_d++;
	while(index_s < nb && src[index_s] != '\0')
	{
		dest[index_d] = src[index_s];
		index_d++;
		index_s++;
	}
	dest[index_d] = '\0';

	return (dest);	
}

#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] = "Programando";
    char src[] = " em Cnnnnnnnnnnnn";

    printf("\n%s\n\n", strncat(dest, src, 20));
}