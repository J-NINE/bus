#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
	int len, i, j;
	
	i = -1;
	while (dest[++i]);
	j = -1;
	while (src[++j])
	{
	      dest[i] = src[j];
	      i++;
	}
	return(dest);
}

int main()
{
    char dest[60] = "gojung";
    char src[] = " gooah";
    char *string;
    
    string = ft_strcat(dest, src);
    
    printf("%s", string);
    
    return(0);
    
}
