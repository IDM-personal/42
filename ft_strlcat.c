#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dest[25] = "123456789";
	char *src = "holabuenas";
	printf("%s",strlcat(dest,src));
}
