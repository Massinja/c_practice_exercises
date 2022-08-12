#include <stdbool.h>
#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{
    int index = 0;
    int last_index = (param_1->size) - 1;
    
    if(last_index == -1 || last_index == 0){
        return true;
    }

    int ascend = 0;
    while (index != last_index) {
        if(param_1->array[index] == param_1->array[index+1]){
            index++;
            continue;
        }

        else if(param_1->array[index] < param_1->array[index+1]){
            ascend++;
        }

        else if(param_1->array[index] > param_1->array[index+1]){
            if(ascend>0){
                return false;
            }
        }

        index++;
        } 
         
    return true;
}
