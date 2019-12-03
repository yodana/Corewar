#include "../../includes/op.h"
#include <fcntl.h>
#include "../../libft/libft.h"
#include <stdio.h>
#include "../../includes/corewar.h"

void    print_label(t_label *labels)
{
    t_label *tmp;

    tmp = labels;
    while (tmp)
    {
        printf("%s\n", tmp->label);
        tmp = tmp->next;
    }
}