#include <stdio.h>

int		ft_strlen(const char *s);
int		ft_write(int fd, const void *buf, size_t count);

int main(int argc, char **argv)
{
	int i;
	
	i = ft_strlen("teubzer");
	printf("i = %d\n", i);
	ft_write(1, "->hello\n", 8);
	printf("oscour\n");
	return 0;
}
