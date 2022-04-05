#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv) {
	if (argc == 0)
	{
		return (0);
	}
	
	int fd;
	// int ret;
	// int i;
	// char buff[BUFFER_SIZE + 1];
	char *get;

	fd = open(argv[1], O_RDONLY);
	get = get_next_line(fd);
	printf("First test: %s\n", get);
	close(fd);
	fd = open(argv[2], O_RDONLY);
	get = get_next_line(fd);
	printf("Second test: %s", get);
	// i = 0;
	// ret = read(fd, buff, BUFFER_SIZE);
	// // while (buff[i])
	// // 	while (buff[i] != '\n')
	// // 		i++;
	// buff[ret] = '\0';
	// printf("%s\n%d", buff, ret);
	close(fd);
	return (0);
}