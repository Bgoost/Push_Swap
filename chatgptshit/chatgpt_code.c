
#include "../inc/push_swap.h"
// long	ft_atol(char *str)
// {
// 	int		i;
// 	long	result;
// 	long	sign;

// 	i = 0;
// 	result = 0;
// 	sign = 1;
// 	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
// 		|| str[i] == '\v' || str[i] == ' ')
// 		i++;
// 	if (str[i] == '-')
// 	{
// 		sign = -1;
// 		i++;
// 	}
// 	else if (str[i] == '+')
// 		i++;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (result * sign);
// }

// void	print_error(void)
// {
// 	write(2, "Error\n", 6);
// 	exit(1);
// }

// int	is_dup(char **argv)
// {
// 	int	i;
// 	int	j;
// 	i = 1;
// 	while (argv[i])
// 	{
// 		j = 1;
// 		while (argv[i + j])
// 		{
// 			if (ft_atol(argv[i]) == ft_atol(argv[i + j]))
// 			{
// 				return (1);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int main(int argc, char *argv[]) 
{
    if (argc < 2) {
        printf("Usage: %s <argument>\n", argv[0]);
        return 1;
    }
    printf("%s\n", argv[1]);
    return 0;
}