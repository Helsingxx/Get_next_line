#include "get_next_line.h"

void *read_from_fd(int fd)
{
	static t_remains	remains;
	t_tools tools;
	
	tools.times_read = 0;
	tools.red = malloc (BUFFER_SIZE);
	copy_remains_if(tools, remains);
	while (1)
	{
		tools.ret = read(fd, tools.red, BUFFER_SIZE);
		tools.a = 0;
		while (tools.red[tools.a] != '\n' || tools.a < tool.ret)
			tools.a++;
		ft_realloc(tools.result, tools.a);
		ft_strlcpy(&tools.result[tools.times_read * BUFFER_SIZE
					+ remains.added_remains[fd]], tools.red, tools.a);
		tools.times_read++;
		if (tools.red[tools.a] == '\n')
		{
			remains.added_remains[fd] = 0;
			if (tools.a < tools.ret)
			{
				remains.remaining[fd] =  malloc(tools.ret - tools.a + 1);
				ft_strlcpy(remains.remaining[fd], &tools.red[tools.a], tools.ret - tools.a);
				remains.added_remains[fd] = tools.ret - tools.a;
			}
			return (tools.result);
		}
	}
}

char *get_next_line(int fd)
{



}