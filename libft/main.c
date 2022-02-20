#include "libft.h"

int main() {
	char s1[] = "aHere is a very big test but noa";
	char s2[] = "aH";
	char *s3;
	s3 = ft_strtrim(s1, s2);
	printf("%s", s3);
	return (0);
}