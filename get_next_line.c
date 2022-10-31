#include "get_next_line.h"

// rem == remains

void *read_from_fd(int fd)
{
	static t_remains	rem;
	t_tools tools;
	
	tools.times_read = 0;
	tools.red = malloc (BUFFER_SIZE);
	if(!tools.red)
		return (0);
	ft_realloc(tools.result, rem.ret[fd] - rem.a[fd], tools);
// realloc should initialize to 0 in case of nothing
	ft_memcpy(&tools.result[0], &rem.rem[fd][rem.a[fd]], rem.ret[fd] - rem.a[fd]);
	while (1)
	{
		tools.ret = read(fd, tools.red, BUFFER_SIZE);
		tools.a = 0;
		while (tools.red[tools.a] != '\n' || tools.a < tool.ret)
			tools.a++;
		ft_realloc(tools.result, tools.a, tools);
		ft_memcpy(&tools.result[tools.times_read * BUFFER_SIZE
					+ rem.ret[fd] - rem.a[fd]], tools.red, tools.a);
		tools.times_read++;
		if (tools.red[tools.a] == '\n' || tools.ret <= 0)
		{
			rem.a[fd] = tools.a;
			rem.ret[fd] = tools.ret; 
			if (tools.a < tools.ret)
			{
				rem.rem[fd] =  malloc(tools.ret - tools.a);
				if (!rem.rem[fd])
					return (0);
				ft_memcpy(rem.rem[fd], &tools.red[tools.a], tools.ret - tools.a);
			}
			free(tools.red);
			if (tools.ret <= 0)
				free(rem.rem[fd]);
			return (tools.result);
		}
	}
}

char *get_next_line(int fd)
{
	return read_from_fd(fd);
}