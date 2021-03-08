#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);


int	main(void)
{
	char ex00test_1[] = "origin";
	char ex00test_2[] = "copy";
	char ex01test_1[] = "origin";
	char ex01test_2[] = "0002";
	char test[] = "GojunG";
	char ex09test[] = "salut, coMMent tu vas ? 42MoTs quarante-deux; cinquante+eT+un";
	char ex10test_1[] = "Hello World!";
	char ex10test_2[] = "Bye";
	char ex11test[] = "Concou\ttu vas bien ?";	

	printf("\n\n===== 00 =====\n");
	printf("%s", ft_strcpy(ex00test_1, ex00test_2));	
	printf("\n\n===== 01 =====\n");
	printf("%s", ft_strncpy(ex01test_1, ex01test_2, 3));
	printf("\n\n===== 02 =====\n");
	printf("%d", ft_str_is_alpha(" "));
	printf("%d", ft_str_is_alpha("asdaf"));
	printf("%d", ft_str_is_alpha("as123"));
	printf("\n\n===== 03 =====\n");
	printf("%d", ft_str_is_numeric("12351"));
	printf("%d", ft_str_is_numeric("123sa1"));
	printf("\n\n===== 04 =====\n");
	printf("%d", ft_str_is_lowercase("sadas"));
	printf("%d", ft_str_is_lowercase("sAdas"));
	printf("\n\n===== 05 =====\n");
	printf("%d", ft_str_is_uppercase("ASDFADG"));
	printf("%d", ft_str_is_uppercase("ASDFADasdG"));
	printf("\n\n===== 06 =====\n");
	printf("%d", ft_str_is_printable("asd21"));	
	printf("%d", ft_str_is_printable(""));	
	printf("\n\n===== 07 =====\n");
	printf("%s", ft_strupcase(test));
	printf("\n\n===== 08 =====\n");
	printf("%s", ft_strlowcase(test));
	printf("\n\n===== 09 =====\n");
	printf("%s\n", ft_strcapitalize(ex09test));
	printf("\n\n===== 10 =====\n");
	printf("%s\n", ex10test_1);
	printf("%d\n", ft_strlcpy(ex10test_1, ex10test_2, -3));
	printf("%s\n", ex10test_1);
	printf("\n\n===== 11 =====\n");
	ft_putstr_non_printable(ex11test);
	printf("\n\n===== 12 =====\n");

	return (0);

}
