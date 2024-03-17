#include "push_swap.h"
static long ft_atol(const char *s)
{
    int sign;
    int num;

    sign = 1;
    num = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n' || \
			*s == '\r' || *s == '\f' || *s == '\v')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
		num = num * 10 + (*s++ - '0');
	return (num * sign);
}

static void append_node(t_node **stack, int n)
{
    t_node *node;
    t_node *last_node;

    if(!stack)
        return ;
    node = malloc(sizeof(t_node));
    if (!node)
        return ;
    node->next = NULL;
    node->number = n;
    if(!(*stack))
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last_node = find_last(*stack); //which node is the last one
        last_node->next = node;
        node->prev = last_node;
    }
}

void init_stack_a(t_node **stack_a, char **argv)
{
    long n;
    int i;

    i = 0;
    while(argv[i])
    {
        n = ft_atol(argv[i]);
        append_node(stack_a, (int)n);
        i++;
    }
}