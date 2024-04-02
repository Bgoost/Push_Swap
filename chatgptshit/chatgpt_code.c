
#include "../inc/push_swap.h"
long	ft_atol(char *str)
{
	int		i;
	long	result;
	long	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	is_dup(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[i + j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[i + j]))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	not_number(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (!argv[i][j])
			return (1);
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	error_int(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		long num = ft_atol(argv[i]);
        if (num > INT_MAX || num < INT_MIN)
            return (1);
        i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{

	if (argc == 1)
		return (1);
	if (not_number(argv) || is_dup(argv) || error_int(argv))
		print_error();

    // Allocate memory for a node and assign it to stack_b
    return 0;
}