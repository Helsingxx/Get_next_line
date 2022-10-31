#include <stdlib.h>
#include <unistd.h>

typedef struct s_remains
{
    char *rem[OPEN_MAX];
    int a[OPEN_MAX];
    int ret[OPEN_MAX];
}   t_remains;

typedef struct s_tools
{
    int a;
	char  *red;
	char *result;
	int ret;
    int times_read;
}   t_tools;