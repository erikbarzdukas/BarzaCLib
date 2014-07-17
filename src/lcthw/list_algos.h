#ifndef lcthw_List_algos_h
#define lcthw_List_algos_h

#include "list.h"

/* Both had a (List_compare)strcmp) but 
 * couldn't figure out why, so omitted for now
 */

typedef int (*List_compare)(const void *a, const void *b); 

int List_bubble_sort(List *list, List_compare cmp);
List List_merge_sort(List *list, List_compare cmp);


#endif

