#include "get_next_line.h"
// #define BUF_SIZE 1
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv) {
	if (argc == 0)
	{
		return (0);
	}
	
	int fd;
	char *get;
	fd = open(argv[1], O_RDONLY);
	while ((get = get_next_line(fd)))
	{
		printf("%s", get);
	}
	close(fd);
	return (1);
}