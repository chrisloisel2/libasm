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


	ft_read(1, str, 10);
	printf("regarde ->%s", str);

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

	char *ret;
	char *ret1;

	ret = malloc(sizeof(char) * 8);
	ret1 = malloc(sizeof(char) * 8);

	str = "azerty";
	str1 = "azerty";
	printf("%s\n", ft_strcpy(ret, str));
	printf("%s\n", ret);
	printf("%s\n", strcpy(ret1, str1));
	return 0;
}
