#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	    i++;
	return(i);
}

char *ft_strcat(char *dest, char *src)
{
    int len, i, j;
    len = ft_strlen(dest) + ft_strlen(src);
    char *result = malloc((int)sizeof(char) * len);

    i = 0;
    while (dest[i] != '\0')
    {
        result[i] = dest[i];
        i++;
    }
    j = 0;
      while (src[j] != '\0')
    {
        result[i] = src[j];
        i++;
	j++;
    }
    return(result);
}

int main()
{
    char dest[] = "gojung";
    char src[] = " gooah";
    char *string;
    
    string = ft_strcat(dest, src);
    
    printf("%s", string);
    
    return(0);
    
}
