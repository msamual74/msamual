
#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "ft.h"
#include "ft_list.h"

void	print_files(t_list *names, int num);
void	print_error(char *str);

#endif
