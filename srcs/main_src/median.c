// calcular mediana

#include "../../inc/push_swap.h"

void make_array_num(t_node *stack) 
{
    int len;
    int *array;
    int i;

    i = 0;
    len = stack_len(stack);
    array = (int *)malloc((len + 1) * sizeof(int));
    if(!array)
        return(NULL);
    while (i < len)
    {
        array[i] = stack->number;
        if(!array)
            return(free(array), NULL);
        i++;
        stack = stack->next;
    }
    array[i] = '\0';
    return(array);    
}

int find_min(int *array, int len)
{
    int i;
    int min;

    i = 0;
    min = array[i];
    while(i < len)
    {
        if(array[i] < min)
            min = array[i];
        i++;
    }
    return (min);
}
// meter stack en array y mirar el len. Dividir el len en dos, si da decimales significa que la array es impar, asi que le sumamos 1.
// mientras le vamos le vamos restando uno a la mediana y miramos cual es el minimo, reseteamos i 
// mientras i < len miramos si el minimo es el contenido del array, si lo es almacenarlo en un temp y transformar ese minimo en el maximo int y hacemos break, sino i++
// devolvemos temp

// QUE HAGO CON LA MEDIANA? AL PASAR DE STACK A AL STACK B, MIRO SI EL NUMERO ES MAYOR O MENOR A LA MEDIANA, DEPENDIENDO DE ESTO LO PONGO AL INICIO O AL FINAL DEL STACK B
int find_median(int *array, int len, int median)
{
    int i;
    int min;
    int tmp = 0;

    if(median % 2 == 0)
        median = median / 2;
    else
        median = (median + 1) / 2;
    while(median--)
    {
        min = find_min(array, len);
        i = 0;
        while(i < len)
        {
            if(array[i] == min)
            {
                tmp = array[i];
                array = INT_MAX;
                break ;
            }
            i++;
        }
    }
    return (tmp);

    return (tmp);
}
