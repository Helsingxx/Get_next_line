#include <stdlib.h>
#include <unistd.h>

typedef struct s_remains
{
    char *remaining[OPEN_MAX];
    int added_remains[OPEN_MAX];
}   t_remains;

typedef struct s_tools
{
    int a;
	char  *red;
	char *result;
	int ret;
    int times_read;
}   t_tools;