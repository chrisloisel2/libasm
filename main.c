#include "libasm.h"

int main(int argc, char **argv)
{
	int i;
	int y;
	char *str;
	char *str1;

	str = malloc(sizeof(char)* 10);
	str1 = malloc(sizeof(char)* 10);
	i = ft_strlen("teubzer");
	y = strlen("teubzer");
	printf("%d = %d\n", i, y);

	i = ft_strlen("");
	y = strlen("");
	printf("%d = %d\n", i, y);

	i = ft_strlen("12345");
	y = strlen("12345");
	printf("%d = %d\n", i, y);

	i = ft_strlen("1");
	y = strlen("1");
	printf("%d = %d\n", i, y);

	i = ft_strlen("12");
	y = strlen("12");
	printf("%d = %d\n", i, y);

	i = ft_strlen("123456789X");
	y = strlen("123456789X");
	printf("%d = %d\n", i, y);


	ft_write(1, "->hello\n", 8);
	read(1, str, 10);
	printf("str = '%s'\n", str);
	ft_read(1, str1, 10);
	printf("str = '%s'\n", str1);

	str = "azerty";
	str1 = "azerty";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str1));
	return 0;
}
