#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
    int len, i, j;
    //len = ft_strlen(dest) + ft_strlen(src);
    //char *result = malloc((int)sizeof(char) * len);

    i = 0;
    while (dest[i])
        i++;
    j = 0;
      while (src[j])
    {
        dest[i] = src[j];
        i++;
    j++;
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
