#include <stdlib.h>
#include "compareElements.h"

/* Compares the values of the float salary, ascending. */

int compare_money_ascending( const void * a, const void * b )
{
    struct element *element_a = (struct element *)a;
    struct element *element_b = (struct element *)b;
    return ( element_a->salary - element_b->salary );
}
