
#include "inc/push_swap.h"

int is_dup(char **argv)
{
    
}

int not_number(char **argv)
{
    int i;
    int j;

    i = 1;
    while(argv[i])
    {
        j = 0;
        if(!argv[i][j])
            return (1);
        if(argv[i][j] == '-' || argv[i][j] == '+')
            j++;
        while(argv[i][j])
        {
            if(!(argv[i][j] >= '0' && argv[i][j] <= '9'))
                return (1);
            j++;
        }
        i++;
    }
}

int error_int(char **argv)
{

}
